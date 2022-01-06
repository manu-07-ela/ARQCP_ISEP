
INSERT INTO COUNTRY (COUNTRYNAME) VALUES ('ISEP');

INSERT INTO PLACELOCATION(LATITUDE, LONGITUDE, COUNTRYNAME) VALUES ('33.71666667','-118.2666667', 'ISEP');
INSERT INTO PLACELOCATION(LATITUDE, LONGITUDE, COUNTRYNAME) VALUES ('53.46666667','-3.033333333', 'ISEP');

INSERT INTO TRUCK (LICENSEPLATE) VALUES(1);

Insert into WAREHOUSE (ID,NAME,PLACELOCATIONLATITUDE,PLACELOCATIONLONGITUDE,CAPACITY) values ('2','warehouse2','33.71666667','-118.2666667','200');
Insert into WAREHOUSE (ID,NAME,PLACELOCATIONLATITUDE,PLACELOCATIONLONGITUDE,CAPACITY) values ('1','warehouse1','53.46666667','-3.033333333','500');
Insert into WAREHOUSE (ID,NAME,PLACELOCATIONLATITUDE,PLACELOCATIONLONGITUDE,CAPACITY) values ('3','warehouse3','53.46666667','-3.033333333','3');

Insert into WAREHOUSE_TRUCK(WAREHOUSEID,TRUCKLICENSEPLATE) VALUES(1,1);
Insert into WAREHOUSE_TRUCK(WAREHOUSEID,TRUCKLICENSEPLATE) VALUES(2,1);
Insert into WAREHOUSE_TRUCK(WAREHOUSEID,TRUCKLICENSEPLATE) VALUES(3,1);

Insert into CONTAINER (NUMBERID,ISOCODE,CHECKDIGIT,MAXWEIGHT,WEIGHT,MAXWEIGHTPACKED,MAXVOLUMEPACKED,REPAIRRECOMMENDATION,CERTIFICATE,PAYLOAD,TARE) 
values ('456789423','pellentesque','9081623','26','195,2','35,4','137,9','#REPAIRRECOMMENDATION','CERTIFICATE','58,6','38,5');

Insert into CARGOMANIFESTLOAD (ID,WAREHOUSEID,TRUCKLICENSEPLATE,ISCONCLUDED) values ('16','2','1',null);
Insert into PHASES (CARGOMANIFESTLOADID,ID,ORIGIN,DESTINATION,EXPECTEDDEPARTUREDATE,EXPECTEDARRIVALDATE,REALDEPARTUREDATE,REALARRIVALDATE) 
values ('16','1','warehouse1','warehouse2',to_timestamp('21.12.30 18:44:33,000000000','RR.MM.DD HH24:MI:SSXFF'),to_timestamp('21.12.31 18:44:33,000000000','RR.MM.DD HH24:MI:SSXFF'),to_timestamp('21.12.30 18:44:33,000000000','RR.MM.DD HH24:MI:SSXFF'),to_timestamp('21.12.31 18:44:33,000000000','RR.MM.DD HH24:MI:SSXFF'));
Insert into CARGOMANIFESTCONTAINER (CARGOMANIFESTLOADID,CONTAINERNUMBERID,PHASESID,XCONTAINER,YCONTAINER,ZCONTAINER,GROSSCONTAINER,PHASESCARGOMANIFESTLOADID) 
values ('16','456789423','1','0','0','0','12,6','16');



Insert into CARGOMANIFESTLOAD (ID,WAREHOUSEID,TRUCKLICENSEPLATE,ISCONCLUDED) values ('14','1','1','1');
Insert into PHASES (CARGOMANIFESTLOADID,ID,ORIGIN,DESTINATION,EXPECTEDDEPARTUREDATE,EXPECTEDARRIVALDATE,REALDEPARTUREDATE,REALARRIVALDATE) values ('14','1','warehouse1','warehouse1',to_timestamp('20.12.30 18:44:33,000000000','RR.MM.DD HH24:MI:SSXFF'),to_timestamp('20.12.31 18:44:33,000000000','RR.MM.DD HH24:MI:SSXFF'),to_timestamp('20.12.30 18:44:33,000000000','RR.MM.DD HH24:MI:SSXFF'),to_timestamp('20.12.31 18:44:33,000000000','RR.MM.DD HH24:MI:SSXFF'));

Insert into CARGOMANIFESTUNLOAD (ID,PHASESID,CARGOMANIFESTLOADID,WAREHOUSEID) values ('12','1','14','1');

Insert into CARGOMANIFESTCONTAINER (CARGOMANIFESTLOADID,CONTAINERNUMBERID,PHASESID,XCONTAINER,YCONTAINER,ZCONTAINER,GROSSCONTAINER,PHASESCARGOMANIFESTLOADID,CARGOMANIFESTUNLOADID) values ('14','456789423','1','0','0','0','12,6','14','12');
Insert into CARGOMANIFESTCONTAINER (CARGOMANIFESTLOADID,CONTAINERNUMBERID,PHASESID,XCONTAINER,YCONTAINER,ZCONTAINER,GROSSCONTAINER,PHASESCARGOMANIFESTLOADID,CARGOMANIFESTUNLOADID) values ('14','223364868','1','0','0','0','12,6','14','12');
Insert into CARGOMANIFESTCONTAINER (CARGOMANIFESTLOADID,CONTAINERNUMBERID,PHASESID,XCONTAINER,YCONTAINER,ZCONTAINER,GROSSCONTAINER,PHASESCARGOMANIFESTLOADID,CARGOMANIFESTUNLOADID) values ('14','633494223','1','0','0','0','12,6','14','12');
Insert into CARGOMANIFESTCONTAINER (CARGOMANIFESTLOADID,CONTAINERNUMBERID,PHASESID,XCONTAINER,YCONTAINER,ZCONTAINER,GROSSCONTAINER,PHASESCARGOMANIFESTLOADID,CARGOMANIFESTUNLOADID) values ('14','920807949','1','0','0','0','12,6','14','12');
Insert into CARGOMANIFESTCONTAINER (CARGOMANIFESTLOADID,CONTAINERNUMBERID,PHASESID,XCONTAINER,YCONTAINER,ZCONTAINER,GROSSCONTAINER,PHASESCARGOMANIFESTLOADID,CARGOMANIFESTUNLOADID) values ('14','628015754','1','0','0','0','12,6','14','12');


Insert into CARGOMANIFESTLOAD (ID,WAREHOUSEID,TRUCKLICENSEPLATE,ISCONCLUDED) values ('15','1','1',null);
Insert into PHASES (CARGOMANIFESTLOADID,ID,ORIGIN,DESTINATION,EXPECTEDDEPARTUREDATE,EXPECTEDARRIVALDATE,REALDEPARTUREDATE,REALARRIVALDATE) values ('15','1','warehouse1','warehouse1',to_timestamp('21.12.30 18:44:33,000000000','RR.MM.DD HH24:MI:SSXFF'),to_timestamp('21.12.31 18:44:33,000000000','RR.MM.DD HH24:MI:SSXFF'),to_timestamp('21.12.30 18:44:33,000000000','RR.MM.DD HH24:MI:SSXFF'),to_timestamp('21.12.31 18:44:33,000000000','RR.MM.DD HH24:MI:SSXFF'));
Insert into CARGOMANIFESTCONTAINER (CARGOMANIFESTLOADID,CONTAINERNUMBERID,PHASESID,XCONTAINER,YCONTAINER,ZCONTAINER,GROSSCONTAINER,PHASESCARGOMANIFESTLOADID) values ('15','456789423','1','0','0','0','12,6','15');
Insert into CARGOMANIFESTCONTAINER (CARGOMANIFESTLOADID,CONTAINERNUMBERID,PHASESID,XCONTAINER,YCONTAINER,ZCONTAINER,GROSSCONTAINER,PHASESCARGOMANIFESTLOADID) values ('15','149378835','1','0','0','0','12,6','15');
Insert into CARGOMANIFESTCONTAINER (CARGOMANIFESTLOADID,CONTAINERNUMBERID,PHASESID,XCONTAINER,YCONTAINER,ZCONTAINER,GROSSCONTAINER,PHASESCARGOMANIFESTLOADID) values ('15','748163149','1','0','0','0','12,6','15');
Insert into CARGOMANIFESTCONTAINER (CARGOMANIFESTLOADID,CONTAINERNUMBERID,PHASESID,XCONTAINER,YCONTAINER,ZCONTAINER,GROSSCONTAINER,PHASESCARGOMANIFESTLOADID) values ('15','694899744','1','0','0','0','12,6','15');
Insert into CARGOMANIFESTCONTAINER (CARGOMANIFESTLOADID,CONTAINERNUMBERID,PHASESID,XCONTAINER,YCONTAINER,ZCONTAINER,GROSSCONTAINER,PHASESCARGOMANIFESTLOADID) values ('15','916849354','1','0','0','0','12,6','15');
Insert into CARGOMANIFESTCONTAINER (CARGOMANIFESTLOADID,CONTAINERNUMBERID,PHASESID,XCONTAINER,YCONTAINER,ZCONTAINER,GROSSCONTAINER,PHASESCARGOMANIFESTLOADID) values ('15','385553229','1','0','0','0','12,6','15');
Insert into CARGOMANIFESTCONTAINER (CARGOMANIFESTLOADID,CONTAINERNUMBERID,PHASESID,XCONTAINER,YCONTAINER,ZCONTAINER,GROSSCONTAINER,PHASESCARGOMANIFESTLOADID) values ('15','198620709','1','0','0','0','12,6','15');
Insert into CARGOMANIFESTCONTAINER (CARGOMANIFESTLOADID,CONTAINERNUMBERID,PHASESID,XCONTAINER,YCONTAINER,ZCONTAINER,GROSSCONTAINER,PHASESCARGOMANIFESTLOADID) values ('15','205492538','1','0','0','0','12,6','15');
Insert into CARGOMANIFESTCONTAINER (CARGOMANIFESTLOADID,CONTAINERNUMBERID,PHASESID,XCONTAINER,YCONTAINER,ZCONTAINER,GROSSCONTAINER,PHASESCARGOMANIFESTLOADID) values ('15','789546125','1','0','0','0','12,6','15');
Insert into CARGOMANIFESTCONTAINER (CARGOMANIFESTLOADID,CONTAINERNUMBERID,PHASESID,XCONTAINER,YCONTAINER,ZCONTAINER,GROSSCONTAINER,PHASESCARGOMANIFESTLOADID) values ('15','213456782','1','0','0','0','12,6','15');


 Insert into CARGOMANIFESTCONTAINER (CARGOMANIFESTLOADID,CONTAINERNUMBERID,PHASESID,XCONTAINER,YCONTAINER,ZCONTAINER,GROSSCONTAINER,PHASESCARGOMANIFESTLOADID) values ('15','633494223','1','0','0','0','12,6','15');
   
    
   
 Insert into CARGOMANIFESTLOAD (ID,WAREHOUSEID,TRUCKLICENSEPLATE
,ISCONCLUDED) values ('17','2','1',null);
Insert into PHASES (CARGOMANIFESTLOADID,ID,ORIGIN,DESTINATION,EXPECTEDDEPARTUREDATE,EXPECTEDARRIVALDATE) values ('17','1','warehouse1','warehouse3',to_timestamp('21.12.30 18:44:33,000000000','RR.MM.DD HH24:MI:SSXFF'),to_timestamp('21.12.31 18:44:33,000000000','RR.MM.DD HH24:MI:SSXFF'));
Insert into CARGOMANIFESTCONTAINER (CARGOMANIFESTLOADID,CONTAINERNUMBERID,PHASESID,XCONTAINER,YCONTAINER,ZCONTAINER,GROSSCONTAINER,PHASESCARGOMANIFESTLOADID) values ('17','456789423','1','0','0','0','12,6','17');
Insert into CARGOMANIFESTCONTAINER (CARGOMANIFESTLOADID,CONTAINERNUMBERID,PHASESID,XCONTAINER,YCONTAINER,ZCONTAINER,GROSSCONTAINER,PHASESCARGOMANIFESTLOADID) values ('17','223364868','1','0','0','0','12,6','17');
Insert into CARGOMANIFESTCONTAINER (CARGOMANIFESTLOADID,CONTAINERNUMBERID,PHASESID,XCONTAINER,YCONTAINER,ZCONTAINER,GROSSCONTAINER,PHASESCARGOMANIFESTLOADID) values ('17','748323899','1','0','0','0','12,6','17');
Insert into CARGOMANIFESTCONTAINER (CARGOMANIFESTLOADID,CONTAINERNUMBERID,PHASESID,XCONTAINER,YCONTAINER,ZCONTAINER,GROSSCONTAINER,PHASESCARGOMANIFESTLOADID) values ('17','920807949','1','0','0','0','12,6','17');
Insert into CARGOMANIFESTCONTAINER (CARGOMANIFESTLOADID,CONTAINERNUMBERID,PHASESID,XCONTAINER,YCONTAINER,ZCONTAINER,GROSSCONTAINER,PHASESCARGOMANIFESTLOADID) values ('17','149378835','1','0','0','0','12,6','17');
