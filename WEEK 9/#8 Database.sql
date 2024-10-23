CREATE TABLE person (
    driver_id VARCHAR(10) PRIMARY KEY,
    name VARCHAR(10),
    address VARCHAR(10)
);

CREATE TABLE car (
    regno VARCHAR(10) PRIMARY KEY,
    model VARCHAR(10),
    year_car INT
);

CREATE TABLE accident (
    report_number INT PRIMARY KEY,
    accd_date DATE,
    location VARCHAR(10)
);

CREATE TABLE owns (
    driver_id VARCHAR(10),
    regno VARCHAR(10),
    PRIMARY KEY (driver_id, regno),
    FOREIGN KEY (driver_id) REFERENCES person(driver_id),
    FOREIGN KEY (regno) REFERENCES car(regno)
);

CREATE TABLE participated (
    driver_id VARCHAR(10),
    regno VARCHAR(10),
    report_number INT,
    damage_amount INT,
    PRIMARY KEY (driver_id, regno, report_number),
    FOREIGN KEY (driver_id) REFERENCES person(driver_id),
    FOREIGN KEY (regno) REFERENCES car(regno),
    FOREIGN KEY (report_number) REFERENCES accident(report_number)
);


INSERT INTO person VALUES ('d0001', 'Shuja', 'Aligarh');
INSERT INTO person VALUES ('d0002', 'Yusuf', 'Aligarh');
INSERT INTO person VALUES ('d0003', 'Moaz', 'Aligarh');
INSERT INTO person VALUES ('d0004', 'Alkaram', 'Pilibhit');
INSERT INTO person VALUES ('d0005', 'Atiyab', 'Delhi');

INSERT INTO car VALUES ('RG1001', 'HONDA', 1999);
INSERT INTO car VALUES ('RG1002', 'AUDI', 2009);
INSERT INTO car VALUES ('RG1003', 'SUPRA', 2001);
INSERT INTO car VALUES ('RG1004', 'BOLERO', 1996);
INSERT INTO car VALUES ('RG1005', 'THAR', 2018);

INSERT INTO accident VALUES (12, TO_DATE('2001-04-19', 'YYYY-MM-DD'), 'Pilibhit');
INSERT INTO accident VALUES (13, TO_DATE('2008-07-18', 'YYYY-MM-DD'), 'Bareilly');
INSERT INTO accident VALUES (14, TO_DATE('2010-08-16', 'YYYY-MM-DD'), 'Aligarh');
INSERT INTO accident VALUES (15, TO_DATE('2008-03-10', 'YYYY-MM-DD'), 'Aligarh');
INSERT INTO accident VALUES (16, TO_DATE('2010-05-11', 'YYYY-MM-DD'), 'Pilibhit');

INSERT INTO owns VALUES ('d0001', 'RG1001');
INSERT INTO owns VALUES ('d0002', 'RG1002');
INSERT INTO owns VALUES ('d0003', 'RG1003');
INSERT INTO owns VALUES ('d0004', 'RG1004');
INSERT INTO owns VALUES ('d0005', 'RG1005');

INSERT INTO participated VALUES ('d0001', 'RG1001', 13, 50000);
INSERT INTO participated VALUES ('d0002', 'RG1002', 14, 90000);
INSERT INTO participated VALUES ('d0003', 'RG1003', 15, 100000);
INSERT INTO participated VALUES ('d0004', 'RG1004', 16, 120000);
INSERT INTO participated VALUES ('d0005', 'RG1005', 12, 40000);


SELECT * FROM person;
SELECT * FROM car;
SELECT * FROM accident;
SELECT * FROM owns;
SELECT * FROM participated;

SELECT * FROM participated;
UPDATE participated
SET damage_amount = 25000
WHERE regno = 'RG1005' AND report_number = 12;
SELECT * FROM participated;


SELECT * FROM accident;
INSERT INTO accident (report_number, accd_date, location) VALUES (18, TO_DATE('2023-10-22', 'YYYY-MM-DD'), 'Pilibhit');
SELECT * FROM accident;

SELECT COUNT(DISTINCT p.driver_id) AS total_people
FROM person p
JOIN owns o ON p.driver_id = o.driver_id
JOIN participated pa ON o.regno = pa.regno
JOIN accident a ON pa.report_number = a.report_number
WHERE TO_CHAR(a.accd_date, 'YYYY') = '2008';


SELECT DISTINCT p.driver_id, p.name, p.address
FROM person p
JOIN owns o ON p.driver_id = o.driver_id
JOIN participated pa ON o.regno = pa.regno
JOIN accident a ON pa.report_number = a.report_number
WHERE TO_CHAR(a.accd_date, 'YYYY') = '2008';


