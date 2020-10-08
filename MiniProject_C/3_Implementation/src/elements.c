#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <elements.h>

struct element {

char name[20];
char symbol[4];
int atomicnum;
int atomicwt;
char crystruct[20];
float atomicrad;
char oxidnno[3];
int ionicrad;
char ionenergy[20];
float eaffinity;
float enegativity;
float density;
float meltingp;
float boilingp;

}
atom[118];


void table()
{

strcpy(atom[0].name,"HYDROGEN");
strcpy(atom[0].symbol,"H");
atom[0].atomicnum=1;
atom[0].atomicwt=1.008;
strcpy(atom[0].crystruct,"hcp/cubic");
atom[0].atomicrad=46;
strcpy(atom[0].oxidnno,"1");
atom[0].ionicrad=154;
strcpy(atom[0].ionenergy,"13.589");
atom[0].eaffinity=0.76;
atom[0].enegativity=2.1;
atom[0].density=0.0899;
atom[0].meltingp=14.01;
atom[0].boilingp=20.4;


strcpy(atom[1].name,"HELIUM");
strcpy(atom[1].symbol,"He");
atom[1].atomicnum=2;
atom[1].atomicwt=4.00;
strcpy(atom[1].crystruct,"hcp/cubic");
atom[1].atomicrad=176;
strcpy(atom[1].oxidnno,"0");
atom[1].ionicrad=0;
strcpy(atom[1].ionenergy,"24.587,54.416");
atom[1].eaffinity= -0.53;
atom[1].enegativity=0;
atom[1].density=0.166;
atom[1].meltingp=0.95;
atom[1].boilingp=4.21;

strcpy(atom[2].name,"LITHIUM");
strcpy(atom[2].symbol,"Li");
atom[2].atomicnum=3;
atom[2].atomicwt=6.94;
strcpy(atom[2].crystruct,"hcp/fcc/bcc");
atom[2].atomicrad=152;
strcpy(atom[2].oxidnno,"1");
atom[2].ionicrad=68;
strcpy(atom[2].ionenergy,"5.392,75.638");
atom[2].eaffinity=0.82;
atom[2].enegativity=1;
atom[2].density=534;
atom[2].meltingp=452;
atom[2].boilingp=1615;

strcpy(atom[3].name,"BERYLLIUM");
strcpy(atom[3].symbol,"Be");
atom[3].atomicnum=4;
atom[3].atomicwt=9.01;
strcpy(atom[3].crystruct,"hcp/cubic");
atom[3].atomicrad=112;
strcpy(atom[3].oxidnno,"2");
atom[3].ionicrad=35;
strcpy(atom[3].ionenergy,"9.32,18.211");
atom[3].eaffinity=0.30;
atom[3].enegativity=1.5;
atom[3].density=1800;
atom[3].meltingp=1550;
atom[3].boilingp=3243;

strcpy(atom[4].name,"BORON");
strcpy(atom[4].symbol,"B");
atom[4].atomicnum=5;
atom[4].atomicwt=10.81;
strcpy(atom[4].crystruct,"ortho");
atom[4].atomicrad=88;
strcpy(atom[4].oxidnno,"3");
atom[4].ionicrad=23;
strcpy(atom[4].ionenergy,"8.298,25.154");
atom[4].eaffinity=0.33;
atom[4].enegativity=2;
atom[4].density=2500;
atom[4].meltingp=2600;
atom[4].boilingp=2820;

strcpy(atom[5].name,"CARBON");
strcpy(atom[5].symbol,"C");
atom[5].atomicnum=6;
atom[5].atomicwt=12.01;
strcpy(atom[5].crystruct,"hex/cubic/graph/diam");
atom[5].atomicrad=71;
strcpy(atom[5].oxidnno,"4,-4");
atom[5].ionicrad=68;
strcpy(atom[5].ionenergy,"11.260,24.383");
atom[5].eaffinity=1.25;
atom[5].enegativity=2.5;
atom[5].density=2300;
atom[5].meltingp=3550;
atom[5].boilingp=5100;

strcpy(atom[6].name,"NITROGEN");
strcpy(atom[6].symbol,"N");
atom[6].atomicnum=7;
atom[6].atomicwt=14.00;
strcpy(atom[6].crystruct,"cubic/hcp");
atom[6].atomicrad=71;
strcpy(atom[6].oxidnno,"3,5");
atom[6].ionicrad=16;
strcpy(atom[6].ionenergy,"14.534,29.601");
atom[6].eaffinity=0.05;
atom[6].enegativity=3;
atom[6].density=1.165;
atom[6].meltingp=63.3;
atom[6].boilingp=77.3;

strcpy(atom[7].name,"OXYGEN");
strcpy(atom[7].symbol,"O");
atom[7].atomicnum=8;
atom[7].atomicwt=15.59;
strcpy(atom[7].crystruct,"rhombic");
atom[7].atomicrad=60;
strcpy(atom[7].oxidnno,"-2");
atom[7].ionicrad=132;
strcpy(atom[7].ionenergy,"13.618,35.116");
atom[7].eaffinity=1.471;
atom[7].enegativity=3.5;
atom[7].density=1.33;
atom[7].meltingp=54.7;
atom[7].boilingp=90.2;

strcpy(atom[8].name,"FLUORINE");
strcpy(atom[8].symbol,"F");
atom[8].atomicnum=9;
atom[8].atomicwt=18.99;
strcpy(atom[8].crystruct,"nil");
atom[8].atomicrad=60;
strcpy(atom[8].oxidnno,"-1");
atom[8].ionicrad=133;
strcpy(atom[8].ionenergy,"17.422,34.97");
atom[8].eaffinity=3.448;
atom[8].enegativity=4;
atom[8].density=1.7;
atom[8].meltingp=53.5;
atom[8].boilingp=85.01;

strcpy(atom[9].name,"NEON");
strcpy(atom[9].symbol,"Ne");
atom[9].atomicnum=10;
atom[9].atomicwt=20.18;
strcpy(atom[9].crystruct,"fcc");
atom[9].atomicrad=160;
strcpy(atom[9].oxidnno,"0");
atom[9].ionicrad=0;
strcpy(atom[9].ionenergy,"21.564,40.962");
atom[9].eaffinity= -0.57;
atom[9].enegativity=0;
atom[9].density=0.839;
atom[9].meltingp=24.5;
atom[9].boilingp=27.2;

strcpy(atom[10].name,"SODIUM");
strcpy(atom[10].symbol,"Na");
atom[10].atomicnum=11;
atom[10].atomicwt=22.99;
strcpy(atom[10].crystruct,"bcc");
atom[10].atomicrad=185;
strcpy(atom[10].oxidnno,"1");
atom[10].ionicrad=97;
strcpy(atom[10].ionenergy,"5.139,47.286");
atom[10].eaffinity=0.84;
atom[10].enegativity=0.9;
atom[10].density=970;
atom[10].meltingp=371;
atom[10].boilingp=1165;

strcpy(atom[11].name,"MAGNESIUM");
strcpy(atom[11].symbol,"Mg");
atom[11].atomicnum=12;
atom[11].atomicwt=24.30;
strcpy(atom[11].crystruct,"hcp");
atom[11].atomicrad=160;
strcpy(atom[11].oxidnno,"2");
atom[11].ionicrad=66;
strcpy(atom[11].ionenergy,"7.646,15.035");
atom[11].eaffinity= -0.32;
atom[11].enegativity=1.2;
atom[11].density=1741;
atom[11].meltingp=924;
atom[11].boilingp=1380;

strcpy(atom[12].name,"ALUMINIUM");
strcpy(atom[12].symbol,"Al");
atom[12].atomicnum=13;
atom[12].atomicwt=1.008;
strcpy(atom[12].crystruct,"fcc");
atom[12].atomicrad=142;
strcpy(atom[12].oxidnno,"2");
atom[12].ionicrad=51;
strcpy(atom[12].ionenergy,"5.986,18.828");
atom[12].eaffinity=0.5;
atom[12].enegativity=1.5;
atom[12].density=2700;
atom[12].meltingp=933.2;
atom[12].boilingp=2740;

strcpy(atom[13].name,"SILICON");
strcpy(atom[13].symbol,"Si");
atom[13].atomicnum=14;
atom[13].atomicwt=28.08;
strcpy(atom[13].crystruct,"cubic");
atom[13].atomicrad=118;
strcpy(atom[13].oxidnno,"4,-4");
atom[13].ionicrad=38;
strcpy(atom[13].ionenergy,"8.151,16.345");
atom[13].eaffinity=1.5;
atom[13].enegativity=1.8;
atom[13].density=2300;
atom[13].meltingp=1680;
atom[13].boilingp=2628;

strcpy(atom[14].name,"PHOSPHOROUS");
strcpy(atom[14].symbol,"P");
atom[14].atomicnum=15;
atom[14].atomicwt=30.97;
strcpy(atom[14].crystruct,"cubic");
atom[14].atomicrad=00;
strcpy(atom[14].oxidnno,"3,5");
atom[14].ionicrad=44;
strcpy(atom[14].ionenergy,"10.486,19.725");
atom[14].eaffinity=0.8;
atom[14].enegativity=2.1;
atom[14].density=2200;
atom[14].meltingp=317.2;
atom[14].boilingp=552;

strcpy(atom[15].name,"SULPHUR");
strcpy(atom[15].symbol,"S");
atom[15].atomicnum=16;
atom[15].atomicwt=32.06;
strcpy(atom[15].crystruct,"fc ortho");
atom[15].atomicrad=106;
strcpy(atom[15].oxidnno,"-2,4");
atom[15].ionicrad=184;
strcpy(atom[15].ionenergy,"10.360,23.33");
atom[15].eaffinity=2.07;
atom[15].enegativity=2.5;
atom[15].density=2070;
atom[15].meltingp=386;
atom[15].boilingp=717.7;

strcpy(atom[16].name,"CHLORINE");
strcpy(atom[16].symbol,"Cl");
atom[16].atomicnum=17;
atom[16].atomicwt=35.45;
strcpy(atom[16].crystruct,"tetra");
atom[16].atomicrad=91;
strcpy(atom[16].oxidnno,"-1,5");
atom[16].ionicrad=181;
strcpy(atom[16].ionenergy,"12.967,23.81");
atom[16].eaffinity=3.615;
atom[16].enegativity=3;
atom[16].density=3.21;
atom[16].meltingp=172.1;
atom[16].boilingp=238.5;

strcpy(atom[17].name,"ARGON");
strcpy(atom[17].symbol,"Ar");
atom[17].atomicnum=18;
atom[17].atomicwt=39.94;
strcpy(atom[17].crystruct,"fcc");
atom[17].atomicrad=174;
strcpy(atom[17].oxidnno,"0");
atom[17].ionicrad=154;
strcpy(atom[17].ionenergy,"15.759,27.629");
atom[17].eaffinity= -1;
atom[17].enegativity=00;
atom[17].density=1.66;
atom[17].meltingp=83.7;
atom[17].boilingp=87.4;

strcpy(atom[18].name,"POTASSIUM");
strcpy(atom[18].symbol,"K");
atom[18].atomicnum=19;
atom[18].atomicwt=39.09;
strcpy(atom[18].crystruct,"bcc");
atom[18].atomicrad=231;
strcpy(atom[18].oxidnno,"1");
atom[18].ionicrad=133;
strcpy(atom[18].ionenergy,"4.341,31.625");
atom[18].eaffinity=0.82;
atom[18].enegativity=0.8;
atom[18].density=860;
atom[18].meltingp=336.8;
atom[18].boilingp=1047;

strcpy(atom[19].name,"CALICUM");
strcpy(atom[19].symbol,"Ca");
atom[19].atomicnum=20;
atom[19].atomicwt=40.07;
strcpy(atom[19].crystruct,"bcc/fcc");
atom[19].atomicrad=196;
strcpy(atom[19].oxidnno,"2");
atom[19].ionicrad=99;
strcpy(atom[19].ionenergy,"6.113,11.871");
atom[19].eaffinity=00;
atom[19].enegativity=1;
atom[19].density=1540;
atom[19].meltingp=1120;
atom[19].boilingp=1760;

strcpy(atom[20].name,"SCANDIUM");
strcpy(atom[20].symbol,"Sc");
atom[20].atomicnum=21;
atom[20].atomicwt=44.95;
strcpy(atom[20].crystruct,"hcp/fcc");
atom[20].atomicrad=160;
strcpy(atom[20].oxidnno,"3");
atom[20].ionicrad=73;
strcpy(atom[20].ionenergy,"6.54,12.80");
atom[20].eaffinity=00;
atom[20].enegativity=1.3;
atom[20].density=3000;
atom[20].meltingp=1812;
atom[20].boilingp=3000;

strcpy(atom[21].name,"TITANIUM");
strcpy(atom[21].symbol,"Ti");
atom[21].atomicnum=22;
atom[21].atomicwt=47.86;
strcpy(atom[21].crystruct,"hcp/bcc");
atom[21].atomicrad=146;
strcpy(atom[21].oxidnno,"4");
atom[21].ionicrad=68;
strcpy(atom[21].ionenergy,"6.82,13.58");
atom[21].eaffinity=0.39;
atom[21].enegativity=1.5;
atom[21].density=4540;
atom[21].meltingp=1948;
atom[21].boilingp=3530;

strcpy(atom[22].name,"VANADIUM");
strcpy(atom[22].symbol,"V");
atom[22].atomicnum=23;
atom[22].atomicwt=50.94;
strcpy(atom[22].crystruct,"bcc");
atom[22].atomicrad=131;
strcpy(atom[22].oxidnno,"3,5");
atom[22].ionicrad=74;
strcpy(atom[22].ionenergy,"6.74,14.65");
atom[22].eaffinity=00;
atom[22].enegativity=1.6;
atom[22].density=6100;
atom[22].meltingp=2160;
atom[22].boilingp=3300;

strcpy(atom[23].name,"CHROMIUM");
strcpy(atom[23].symbol,"Cr");
atom[23].atomicnum=24;
atom[23].atomicwt=51.99;
strcpy(atom[23].crystruct,"bcc");
atom[23].atomicrad=125;
strcpy(atom[23].oxidnno,"3,6");
atom[23].ionicrad=63;
strcpy(atom[23].ionenergy,"6.766,16.50");
atom[23].eaffinity=0.98;
atom[23].enegativity=1.6;
atom[23].density=7200;
atom[23].meltingp=2160;
atom[23].boilingp=2755;

strcpy(atom[24].name,"MANGANESE");
strcpy(atom[24].symbol,"Mg");
atom[24].atomicnum=25;
atom[24].atomicwt=54.84;
strcpy(atom[24].crystruct,"cubic");
atom[24].atomicrad=112;
strcpy(atom[24].oxidnno,"2,3");
atom[24].ionicrad=80;
strcpy(atom[24].ionenergy,"7.432,15.640");
atom[24].eaffinity=00;
atom[24].enegativity=1.5;
atom[24].density=7440;
atom[24].meltingp=1517;
atom[24].boilingp=2370;

strcpy(atom[25].name,"IRON");
strcpy(atom[25].symbol,"Fe");
atom[25].atomicnum=26;
atom[25].atomicwt=55.84;
strcpy(atom[25].crystruct,"bcc/fcc");
atom[25].atomicrad=123;
strcpy(atom[25].oxidnno,"2,3");
atom[25].ionicrad=64;
strcpy(atom[25].ionenergy,"7.87,16.18");
atom[25].eaffinity=0.6;
atom[25].enegativity=1.8;
atom[25].density=7870;
atom[25].meltingp=1808;
atom[25].boilingp=3300;

strcpy(atom[26].name,"COBALT");
strcpy(atom[26].symbol,"Co");
atom[26].atomicnum=27;
atom[26].atomicwt=58.93;
strcpy(atom[26].crystruct,"hcp/fcc");
atom[26].atomicrad=125;
strcpy(atom[26].oxidnno,"2,3");
atom[26].ionicrad=63;
strcpy(atom[26].ionenergy,"7.86,17.06");
atom[26].eaffinity=0.9;
atom[26].enegativity=1.8;
atom[26].density=8900;
atom[26].meltingp=1765;
atom[26].boilingp=3170;

strcpy(atom[27].name,"NICKEL");
strcpy(atom[27].symbol,"Ni");
atom[27].atomicnum=28;
atom[27].atomicwt=58.69;
strcpy(atom[27].crystruct,"fcc");
atom[27].atomicrad=124;
strcpy(atom[27].oxidnno,"2,3");
atom[27].ionicrad=69;
strcpy(atom[27].ionenergy,"7.635,18.168");
atom[27].eaffinity=1.3;
atom[27].enegativity=1.8;
atom[27].density=8900;
atom[27].meltingp=1726;
atom[27].boilingp=3005;

strcpy(atom[28].name,"COPPER");
strcpy(atom[28].symbol,"Cu");
atom[28].atomicnum=29;
atom[28].atomicwt=63.54;
strcpy(atom[20].crystruct,"fcc");
atom[20].atomicrad=128;
strcpy(atom[20].oxidnno,"1,2");
atom[20].ionicrad=96;
strcpy(atom[20].ionenergy,"7.726,20.292");
atom[20].eaffinity=1.8;
atom[20].enegativity=1.9;
atom[20].density=8930;
atom[20].meltingp=1356;
atom[20].boilingp=2868;

strcpy(atom[29].name,"ZINC");
strcpy(atom[29].symbol,"Zn");
atom[29].atomicnum=30;
atom[29].atomicwt=65.39;
strcpy(atom[29].crystruct,"hcp");
atom[29].atomicrad=133;
strcpy(atom[29].oxidnno,"2");
atom[29].ionicrad=74;
strcpy(atom[29].ionenergy,"9.394,17.964");
atom[29].eaffinity=00;
atom[29].enegativity=1.6;
atom[29].density=7140;
atom[29].meltingp=692.6;
atom[29].boilingp=1180;

strcpy(atom[30].name,"GALLIUM");
strcpy(atom[30].symbol,"Ga");
atom[30].atomicnum=31;
atom[30].atomicwt=69.72;
strcpy(atom[30].crystruct,"fcc/ortho");
atom[30].atomicrad=121;
strcpy(atom[30].oxidnno,"1,3");
atom[30].ionicrad=62;
strcpy(atom[30].ionenergy,"5.99,20.51");
atom[30].eaffinity=00;
atom[30].enegativity=1.6;
atom[30].density=5950;
atom[30].meltingp=302.9;
atom[30].boilingp=2676;

strcpy(atom[31].name,"GERMANIUM");
strcpy(atom[31].symbol,"Ge");
atom[31].atomicnum=32;
atom[31].atomicwt=72.64;
strcpy(atom[31].crystruct,"cubic");
atom[31].atomicrad=122;
strcpy(atom[31].oxidnno,"4");
atom[31].ionicrad=53;
strcpy(atom[31].ionenergy,"7.899,15.934");
atom[31].eaffinity=00;
atom[31].enegativity=1.8;
atom[31].density=5400;
atom[31].meltingp=1210.5;
atom[31].boilingp=3100;

strcpy(atom[32].name,"ARSENIC");
strcpy(atom[32].symbol,"As");
atom[32].atomicnum=33;
atom[32].atomicwt=74.92;
strcpy(atom[32].crystruct,"rhombic");
atom[32].atomicrad=125;
strcpy(atom[32].oxidnno,"5,3");
atom[32].ionicrad=58;
strcpy(atom[32].ionenergy,"9.81,19.633");
atom[32].eaffinity=00;
atom[32].enegativity=2.0;
atom[32].density=5730;
atom[32].meltingp=1090;
atom[32].boilingp=886;

strcpy(atom[33].name,"SELENIUM");
strcpy(atom[33].symbol,"Se");
atom[33].atomicnum=34;
atom[33].atomicwt=78.96;
strcpy(atom[33].crystruct,"hcp");
atom[33].atomicrad=116;
strcpy(atom[33].oxidnno,"-2");
atom[33].ionicrad=191;
strcpy(atom[33].ionenergy,"9.735,21.15");
atom[33].eaffinity=3.7;
atom[33].enegativity=2.4;
atom[33].density=4810;
atom[33].meltingp=490;
atom[33].boilingp=958;

strcpy(atom[34].name,"BROMINE");
strcpy(atom[34].symbol,"Br");
atom[34].atomicnum=35;
atom[34].atomicwt=79.90;
strcpy(atom[34].crystruct,"ortho");
atom[34].atomicrad=114;
strcpy(atom[34].oxidnno,"-1,5");
atom[34].ionicrad=196;
strcpy(atom[34].ionenergy,"11.814,21.8");
atom[34].eaffinity=3.4;
atom[34].enegativity=2.8;
atom[34].density=3100;
atom[34].meltingp=259.6;
atom[34].boilingp=311;

strcpy(atom[35].name,"KRYPTON");
strcpy(atom[35].symbol,"Kr");
atom[35].atomicnum=36;
atom[35].atomicwt=83.80;
strcpy(atom[35].crystruct,"fcc");
atom[35].atomicrad=201;
strcpy(atom[35].oxidnno,"0");
atom[35].ionicrad=00;
strcpy(atom[35].ionenergy,"13.999,24.359");
atom[35].eaffinity=00;
atom[35].enegativity=00;
atom[35].density=3.49;
atom[35].meltingp=116.5;
atom[35].boilingp=120.8;

strcpy(atom[36].name,"RUBIDIUM");
strcpy(atom[36].symbol,"Rb");
atom[36].atomicnum=37;
atom[36].atomicwt=85.46;
strcpy(atom[36].crystruct,"bcc");
atom[36].atomicrad=246;
strcpy(atom[36].oxidnno,"1");
atom[36].ionicrad=147;
strcpy(atom[36].ionenergy,"4.177,27.87");
atom[36].eaffinity=004;
atom[36].enegativity=0.8;
atom[36].density=1530;
atom[36].meltingp=312;
atom[36].boilingp=961;

strcpy(atom[37].name,"STRONTIUM");
strcpy(atom[37].symbol,"Sr");
atom[37].atomicnum=38;
atom[37].atomicwt=87.62;
strcpy(atom[37].crystruct,"fcc/hcp/bcc");
atom[37].atomicrad=215;
strcpy(atom[37].oxidnno,"2");
atom[37].ionicrad=112;
strcpy(atom[37].ionenergy,"5.695,11.030");
atom[37].eaffinity=00;
atom[37].enegativity=1.0;
atom[37].density=2600;
atom[37].meltingp=1042;
atom[37].boilingp=1657;

strcpy(atom[38].name,"YTTRIUM");
strcpy(atom[38].symbol,"Y");
atom[38].atomicnum=39;
atom[38].atomicwt=88.90;
strcpy(atom[38].crystruct,"hcp/bcc");
atom[38].atomicrad=181;
strcpy(atom[38].oxidnno,"3");
atom[38].ionicrad=89;
strcpy(atom[38].ionenergy,"6.38,12.24");
atom[38].eaffinity=00;
atom[38].enegativity=1.2;
atom[38].density=4600;
atom[38].meltingp=1768;
atom[38].boilingp=3200;

strcpy(atom[39].name,"ZIRCONIUM");
strcpy(atom[39].symbol,"Zr");
atom[39].atomicnum=40;
atom[39].atomicwt=91.22;
strcpy(atom[39].crystruct,"hcp/bcc");
atom[39].atomicrad=160;
strcpy(atom[39].oxidnno,"4");
atom[39].ionicrad=79;
strcpy(atom[39].ionenergy,"6.84,13.13");
atom[39].eaffinity=00;
atom[39].enegativity=1.4;
atom[39].density=6500;
atom[39].meltingp=2125;
atom[39].boilingp=3851;

strcpy(atom[40].name,"NIOBIUM");
strcpy(atom[40].symbol,"Nb");
atom[40].atomicnum=41;
atom[40].atomicwt=92.90;
strcpy(atom[40].crystruct,"bcc");
atom[40].atomicrad=143;
strcpy(atom[40].oxidnno,"5");
atom[40].ionicrad=69;
strcpy(atom[40].ionenergy,"6.88,14.32");
atom[40].eaffinity=00;
atom[40].enegativity=1.6;
atom[40].density=8.570;
atom[40].meltingp=2741;
atom[40].boilingp=5200;

strcpy(atom[41].name,"MOLYBDENUM");
strcpy(atom[41].symbol,"Mo");
atom[41].atomicnum=42;
atom[41].atomicwt=95.94;
strcpy(atom[41].crystruct,"bcc");
atom[41].atomicrad=136;
strcpy(atom[41].oxidnno,"4,6");
atom[41].ionicrad=62;
strcpy(atom[41].ionenergy,"7.099,16.15");
atom[41].eaffinity=1.0;
atom[41].enegativity=1.8;
atom[41].density=10200;
atom[41].meltingp=2880;
atom[41].boilingp=5830;

strcpy(atom[42].name,"TECHNETIUM");
strcpy(atom[42].symbol,"Tc");
atom[42].atomicnum=43;
atom[42].atomicwt=98.00;
strcpy(atom[42].crystruct,"hcp");
atom[42].atomicrad=135;
strcpy(atom[42].oxidnno,"7");
atom[42].ionicrad=98;
strcpy(atom[42].ionenergy,"7.28,15.26");
atom[42].eaffinity=00;
atom[42].enegativity=1.9;
atom[42].density=11400;
atom[42].meltingp=2500;
atom[42].boilingp=4900;

strcpy(atom[43].name,"RUTHENIUM");
strcpy(atom[43].symbol,"Ru");
atom[43].atomicnum=44;
atom[43].atomicwt=101.07;
strcpy(atom[43].crystruct,"bcc");
atom[43].atomicrad=133;
strcpy(atom[43].oxidnno,"4");
atom[43].ionicrad=67;
strcpy(atom[43].ionenergy,"7.374,16.76");
atom[43].eaffinity=00;
atom[43].enegativity=2.2;
atom[43].density=12400;
atom[43].meltingp=2520;
atom[43].boilingp=4200;

strcpy(atom[44].name,"RHODIUM");
strcpy(atom[44].symbol,"Rh");
atom[44].atomicnum=45;
atom[44].atomicwt=102.90;
strcpy(atom[44].crystruct,"fcc");
atom[44].atomicrad=134;
strcpy(atom[44].oxidnno,"3");
atom[44].ionicrad=68;
strcpy(atom[44].ionenergy,"7.46,18.08");
atom[44].eaffinity=00;
atom[44].enegativity=2.2;
atom[44].density=12440;
atom[44].meltingp=2520;
atom[44].boilingp=4200;

strcpy(atom[45].name,"PALLADIUM");
strcpy(atom[45].symbol,"Pd");
atom[45].atomicnum=46;
atom[45].atomicwt=106.42;
strcpy(atom[45].crystruct,"fcc");
atom[45].atomicrad=137;
strcpy(atom[45].oxidnno,"2,4");
atom[45].ionicrad=80;
strcpy(atom[45].ionenergy,"8.34,19.43");
atom[45].eaffinity=1.471;
atom[45].enegativity=3.5;
atom[45].density=12000;
atom[45].meltingp=1825;
atom[45].boilingp=3200;

strcpy(atom[46].name,"SILVER");
strcpy(atom[46].symbol,"Ag");
atom[46].atomicnum=47;
atom[46].atomicwt=107.86;
strcpy(atom[46].crystruct,"hcp/fcc");
atom[46].atomicrad=144;
strcpy(atom[46].oxidnno,"1");
atom[46].ionicrad=126;
strcpy(atom[46].ionenergy,"7.575,21.49");
atom[46].eaffinity=2.5;
atom[46].enegativity=1.9;
atom[46].density=10500;
atom[46].meltingp=1234;
atom[46].boilingp=2485;

strcpy(atom[47].name,"CADMIUM");
strcpy(atom[47].symbol,"Cd");
atom[47].atomicnum=48;
atom[47].atomicwt=112.41;
strcpy(atom[47].crystruct,"hcp");
atom[47].atomicrad=148;
strcpy(atom[47].oxidnno,"2");
atom[47].ionicrad=97;
strcpy(atom[47].ionenergy,"8.993,16.908");
atom[47].eaffinity=00;
atom[47].enegativity=1.7;
atom[47].density=8650;
atom[47].meltingp=594.2;
atom[47].boilingp=1038;

strcpy(atom[48].name,"INDIUM");
strcpy(atom[48].symbol,"In");
atom[48].atomicnum=49;
atom[48].atomicwt=114.81;
strcpy(atom[48].crystruct,"bc tetra");
atom[48].atomicrad=162;
strcpy(atom[48].oxidnno,"3");
atom[48].ionicrad=81;
strcpy(atom[48].ionenergy,"5.768,18.896");
atom[48].eaffinity=00;
atom[48].enegativity=1.7;
atom[48].density=7310;
atom[48].meltingp=429.3;
atom[48].boilingp=2300;

strcpy(atom[49].name,"TIN");
strcpy(atom[49].symbol,"Sn");
atom[49].atomicnum=50;
atom[49].atomicwt=118.71;
strcpy(atom[49].crystruct,"cubic/bcc");
atom[49].atomicrad=140;
strcpy(atom[49].oxidnno,"2,4");
atom[49].ionicrad=93;
strcpy(atom[49].ionenergy,"7.344,14.632");
atom[49].eaffinity=00;
atom[49].enegativity=1.8;
atom[49].density=7300;
atom[49].meltingp=505.1;
atom[49].boilingp=2540;

strcpy(atom[50].name,"ANTIMONY");
strcpy(atom[50].symbol,"Sb");
atom[50].atomicnum=51;
atom[50].atomicwt=121.76;
strcpy(atom[50].crystruct,"rhombic");
atom[50].atomicrad=145;
strcpy(atom[50].oxidnno,"3,5");
atom[50].ionicrad=76;
strcpy(atom[50].ionenergy,"8.641,16.53");
atom[50].eaffinity=1.9;
atom[50].enegativity=1.9;
atom[50].density=6700;
atom[50].meltingp=903.1;
atom[50].boilingp=1650;

strcpy(atom[51].name,"TELLURIUM");
strcpy(atom[51].symbol,"Te");
atom[51].atomicnum=52;
atom[51].atomicwt=127.60;
strcpy(atom[51].crystruct,"hcp");
atom[51].atomicrad=143;
strcpy(atom[51].oxidnno,"-2");
atom[51].ionicrad=211;
strcpy(atom[51].ionenergy,"9.009,18.6");
atom[51].eaffinity=3.6;
atom[51].enegativity=2.1;
atom[51].density=6240;
atom[51].meltingp=722.6;
atom[51].boilingp=1260;

strcpy(atom[52].name,"IODINE");
strcpy(atom[52].symbol,"I");
atom[52].atomicnum=53;
atom[52].atomicwt=126.90;
strcpy(atom[50].crystruct,"rhombic");
atom[50].atomicrad=145;
strcpy(atom[50].oxidnno,"3,5");
atom[50].ionicrad=76;
strcpy(atom[50].ionenergy,"8.641,16.53");
atom[50].eaffinity=1.9;
atom[50].enegativity=1.9;
atom[50].density=6700;
atom[50].meltingp=903.1;
atom[50].boilingp=1650;

strcpy(atom[53].name,"XENON");
strcpy(atom[53].symbol,"Xe");
atom[53].atomicnum=54;
atom[53].atomicwt=131.29;
strcpy(atom[53].crystruct,"fcc");
atom[53].atomicrad=221;
strcpy(atom[53].oxidnno,"0");
atom[53].ionicrad=00;
strcpy(atom[53].ionenergy,"12.130,21.21");
atom[53].eaffinity=00;
atom[53].enegativity=00;
atom[53].density=5.50;
atom[53].meltingp=161.2;
atom[53].boilingp=166;

strcpy(atom[54].name,"CAESIUM");
strcpy(atom[54].symbol,"Cs");
atom[54].atomicnum=55;
atom[54].atomicwt=132.906;
strcpy(atom[54].crystruct,"bcc");
atom[54].atomicrad=262;
strcpy(atom[54].oxidnno,"1");
atom[54].ionicrad=167;
strcpy(atom[54].ionenergy,"3.894,25.1");
atom[54].eaffinity=0.19;
atom[54].enegativity=0.7;
atom[54].density=1870;
atom[54].meltingp=301.6;
atom[54].boilingp=960;

strcpy(atom[55].name,"BARIUM");
strcpy(atom[55].symbol,"Ba");
atom[55].atomicnum=56;
atom[55].atomicwt=137.372;
strcpy(atom[55].crystruct,"bcc");
atom[55].atomicrad=217;
strcpy(atom[55].oxidnno,"2");
atom[55].ionicrad=134;
strcpy(atom[55].ionenergy,"5.212,10.004");
atom[55].eaffinity=00;
atom[55].enegativity=0.9;
atom[55].density=3600;
atom[55].meltingp=1000;
atom[55].boilingp=1910;

strcpy(atom[56].name,"LANTHANUM");
strcpy(atom[56].symbol,"La");
atom[56].atomicnum=57;
atom[56].atomicwt=138.906;
strcpy(atom[56].crystruct,"hcp/fcc/bcc");
atom[56].atomicrad=187;
strcpy(atom[56].oxidnno,"1,3");
atom[56].ionicrad=139;
strcpy(atom[56].ionenergy,"5.577,11.06");
atom[56].eaffinity=00;
atom[56].enegativity=1.1;
atom[56].density=6150;
atom[56].meltingp=1190;
atom[56].boilingp=3742;

strcpy(atom[57].name,"CERIUM");
strcpy(atom[57].symbol,"Ce");
atom[57].atomicnum=58;
atom[57].atomicwt=140.116;
strcpy(atom[57].crystruct,"fcc/hcp/bcc/hex");
atom[57].atomicrad=183;
strcpy(atom[57].oxidnno,"3,4");
atom[57].ionicrad=103;
strcpy(atom[57].ionenergy,"5.47,10.85");
atom[57].eaffinity=00;
atom[57].enegativity=1.1;
atom[57].density=6800;
atom[57].meltingp=1070;
atom[57].boilingp=3470;

strcpy(atom[58].name,"PRASEODYMIUM");
strcpy(atom[58].symbol,"Pr");
atom[58].atomicnum=59;
atom[58].atomicwt=140.906;
strcpy(atom[58].crystruct,"hcp/bcc");
atom[58].atomicrad=182;
strcpy(atom[58].oxidnno,"3");
atom[58].ionicrad=101;
strcpy(atom[58].ionenergy,"5.42,10.55");
atom[58].eaffinity=00;
atom[58].enegativity=1.1;
atom[58].density=6800;
atom[58].meltingp=1208;
atom[58].boilingp=3400;

strcpy(atom[59].name,"NEODYMIUM");
strcpy(atom[59].symbol,"Nd");
atom[59].atomicnum=60;
atom[59].atomicwt=144.240;
strcpy(atom[59].crystruct,"hcp/bcc");
atom[59].atomicrad=181;
strcpy(atom[59].oxidnno,"3");
atom[59].ionicrad=100;
strcpy(atom[59].ionenergy,"5.49,10.72");
atom[59].eaffinity=00;
atom[59].enegativity=1.1;
atom[59].density=6960;
atom[59].meltingp=1297;
atom[59].boilingp=3300;


strcpy(atom[60].name,"PROMETHIUM");
strcpy(atom[60].symbol,"Pm");
atom[60].atomicnum=61;
atom[60].atomicwt=145.000;
strcpy(atom[60].crystruct,"nil");
atom[60].atomicrad=243;
strcpy(atom[60].oxidnno,"3");
atom[60].ionicrad=98;
strcpy(atom[60].ionenergy,"5.55,10.90");
atom[60].eaffinity=00;
atom[60].enegativity=1.1;
atom[60].density=7360;
atom[60].meltingp=1308;
atom[60].boilingp=3000;

strcpy(atom[61].name,"SAMARIUM");
strcpy(atom[61].symbol,"Sm");
atom[61].atomicnum=62;
atom[61].atomicwt=150.36;
strcpy(atom[61].crystruct,"rhombic/bcc");
atom[61].atomicrad=179;
strcpy(atom[61].oxidnno,"3");
atom[61].ionicrad=96;
strcpy(atom[61].ionenergy,"5.63,11.07");
atom[61].eaffinity=00;
atom[61].enegativity=1.1;
atom[61].density=7500;
atom[61].meltingp=1345;
atom[61].boilingp=2200;

strcpy(atom[62].name,"EUROPIUM");
strcpy(atom[62].symbol,"Eu");
atom[62].atomicnum=63;
atom[62].atomicwt=151.96;
strcpy(atom[62].crystruct,"bcc");
atom[62].atomicrad=198;
strcpy(atom[62].oxidnno,"2,3");
atom[62].ionicrad=95;
strcpy(atom[62].ionenergy,"5.67,11.25");
atom[62].eaffinity=00;
atom[62].enegativity=1.1;
atom[62].density=5200;
atom[62].meltingp=1100;
atom[62].boilingp=1712;

strcpy(atom[63].name,"GADOLINIUM");
strcpy(atom[63].symbol,"Gd");
atom[63].atomicnum=64;
atom[63].atomicwt=157.25;
strcpy(atom[63].crystruct,"hcp/bcc");
atom[63].atomicrad=178;
strcpy(atom[63].oxidnno,"3");
atom[63].ionicrad=94;
strcpy(atom[63].ionenergy,"6.14,12.1");
atom[63].eaffinity=00;
atom[63].enegativity=1.2;
atom[63].density=7900;
atom[63].meltingp=1585;
atom[63].boilingp=3000;

strcpy(atom[64].name,"TERBIUM");
strcpy(atom[64].symbol,"Tb");
atom[64].atomicnum=65;
atom[64].atomicwt=158.92;
strcpy(atom[64].crystruct,"rhombic/hcp");
atom[64].atomicrad=159;
strcpy(atom[64].oxidnno,"3");
atom[64].ionicrad=92;
strcpy(atom[64].ionenergy,"5.85,11.52");
atom[64].eaffinity=00;
atom[64].enegativity=1.2;
atom[64].density=8300;
atom[64].meltingp=1629;
atom[64].boilingp=3100;

strcpy(atom[65].name,"DYSPROSIUM");
strcpy(atom[65].symbol,"Dy");
atom[65].atomicnum=66;
atom[65].atomicwt=162.50;
strcpy(atom[60].crystruct,"rhombic/hcp");
atom[60].atomicrad=175;
strcpy(atom[60].oxidnno,"3");
atom[60].ionicrad=91;
strcpy(atom[60].ionenergy,"5.93,11.67");
atom[60].eaffinity=00;
atom[60].enegativity=1.2;
atom[60].density=8500;
atom[60].meltingp=1680;
atom[60].boilingp=2900;

strcpy(atom[66].name,"HOLMIUM");
strcpy(atom[66].symbol,"Ho");
atom[66].atomicnum=67;
atom[66].atomicwt=164.93;
strcpy(atom[66].crystruct,"hcp");
atom[66].atomicrad=176;
strcpy(atom[66].oxidnno,"3");
atom[66].ionicrad=89;
strcpy(atom[66].ionenergy,"6.02,11.80");
atom[66].eaffinity=00;
atom[66].enegativity=1.2;
atom[66].density=8800;
atom[66].meltingp=1734;
atom[66].boilingp=2900;

strcpy(atom[67].name,"ERBIUM");
strcpy(atom[67].symbol,"Er");
atom[67].atomicnum=68;
atom[67].atomicwt=167.25;
strcpy(atom[67].crystruct,"hcp");
atom[67].atomicrad=173;
strcpy(atom[67].oxidnno,"3");
atom[67].ionicrad=88;
strcpy(atom[67].ionenergy,"6.10,11.93");
atom[67].eaffinity=00;
atom[67].enegativity=1.2;
atom[67].density=9000;
atom[67].meltingp=1770;
atom[67].boilingp=3200;

strcpy(atom[68].name,"THULIUM");
strcpy(atom[68].symbol,"Tm");
atom[68].atomicnum=69;
atom[68].atomicwt=168.93;
strcpy(atom[68].crystruct,"hcp/bcc");
atom[68].atomicrad=174;
strcpy(atom[68].oxidnno,"3");
atom[68].ionicrad=87;
strcpy(atom[68].ionenergy,"6.18,12.05");
atom[68].eaffinity=00;
atom[68].enegativity=1.2;
atom[68].density=9300;
atom[68].meltingp=1818;
atom[68].boilingp=2000;

strcpy(atom[69].name,"YTTERBIUM");
strcpy(atom[69].symbol,"Yb");
atom[69].atomicnum=70;
atom[69].atomicwt=173.04;
strcpy(atom[69].crystruct,"fcc/bcc");
atom[69].atomicrad=193;
strcpy(atom[69].oxidnno,"3");
atom[69].ionicrad=86;
strcpy(atom[69].ionenergy,"6.254,12.17");
atom[69].eaffinity=00;
atom[69].enegativity=1.2;
atom[69].density=7000;
atom[69].meltingp=1097;
atom[69].boilingp=1700;

strcpy(atom[70].name,"LUTETIUM");
strcpy(atom[70].symbol,"Lu");
atom[70].atomicnum=71;
atom[70].atomicwt=174.96;
strcpy(atom[70].crystruct,"hcp");
atom[70].atomicrad=173;
strcpy(atom[70].oxidnno,"3");
atom[70].ionicrad=85;
strcpy(atom[70].ionenergy,"5.426,13.9");
atom[70].eaffinity=00;
atom[70].enegativity=1.2;
atom[70].density=9800;
atom[70].meltingp=1925;
atom[70].boilingp=3600;

strcpy(atom[71].name,"HAFNIUM");
strcpy(atom[71].symbol,"Hf");
atom[71].atomicnum=72;
atom[71].atomicwt=178.49;
strcpy(atom[71].crystruct,"hcp/bcc");
atom[71].atomicrad=158;
strcpy(atom[71].oxidnno,"4");
atom[71].ionicrad=78;
strcpy(atom[71].ionenergy,"7.0,14.9");
atom[71].eaffinity=00;
atom[71].enegativity=1.3;
atom[71].density=13300;
atom[71].meltingp=2423;
atom[71].boilingp=5700;

strcpy(atom[72].name,"TANTALUM");
strcpy(atom[72].symbol,"Ta");
atom[72].atomicnum=73;
atom[72].atomicwt=180.94;
strcpy(atom[72].crystruct,"bcc");
atom[72].atomicrad=143;
strcpy(atom[72].oxidnno,"5");
atom[72].ionicrad=68;
strcpy(atom[72].ionenergy,"7.89,16.2");
atom[72].eaffinity=00;
atom[72].enegativity=1.5;
atom[72].density=16600;
atom[72].meltingp=3269;
atom[72].boilingp=5698;

strcpy(atom[73].name,"TUNGSTEN");
strcpy(atom[73].symbol,"W");
atom[73].atomicnum=74;
atom[73].atomicwt=174.96;
strcpy(atom[73].crystruct,"bcc");
atom[73].atomicrad=137;
strcpy(atom[73].oxidnno,"6");
atom[73].ionicrad=62;
strcpy(atom[73].ionenergy,"7.89,17.7");
atom[73].eaffinity=0.5;
atom[73].enegativity=1.7;
atom[73].density=19320;
atom[73].meltingp=3650;
atom[73].boilingp=6200;

strcpy(atom[74].name,"RHENIUM");
strcpy(atom[74].symbol,"Re");
atom[74].atomicnum=75;
atom[74].atomicwt=186.84;
strcpy(atom[74].crystruct,"hcp");
atom[74].atomicrad=137;
strcpy(atom[74].oxidnno,"4");
atom[74].ionicrad=72;
strcpy(atom[74].ionenergy,"7.88,16.6");
atom[74].eaffinity=0.15;
atom[74].enegativity=1.9;
atom[74].density=20500;
atom[74].meltingp=3450;
atom[74].boilingp=5900;

strcpy(atom[75].name,"OSMIUM");
strcpy(atom[75].symbol,"Os");
atom[75].atomicnum=76;
atom[75].atomicwt=190.23;
strcpy(atom[75].crystruct,"hcp");
atom[75].atomicrad=135;
strcpy(atom[75].oxidnno,"4");
atom[75].ionicrad=69;
strcpy(atom[75].ionenergy,"8.7,17.0");
atom[75].eaffinity=00;
atom[75].enegativity=2.2;
atom[75].density=22480;
atom[75].meltingp=3300;
atom[75].boilingp=4900;

strcpy(atom[76].name,"IRIDIUM");
strcpy(atom[76].symbol,"Ir");
atom[76].atomicnum=77;
atom[76].atomicwt=192.21;
strcpy(atom[76].crystruct,"fcc");
atom[76].atomicrad=135;
strcpy(atom[76].oxidnno,"4");
atom[76].ionicrad=68;
strcpy(atom[76].ionenergy,"9.1");
atom[76].eaffinity=00;
atom[76].enegativity=2.2;
atom[76].density=22420;
atom[76].meltingp=2716;
atom[76].boilingp=4800;

strcpy(atom[77].name,"PLATINUM");
strcpy(atom[77].symbol,"Pt");
atom[77].atomicnum=78;
atom[77].atomicwt=195.07;
strcpy(atom[77].crystruct,"fcc");
atom[77].atomicrad=138;
strcpy(atom[77].oxidnno,"2,4");
atom[77].ionicrad=80;
strcpy(atom[77].ionenergy,"9.0,18.563");
atom[77].eaffinity=00;
atom[77].enegativity=2.2;
atom[77].density=21450;
atom[77].meltingp=2042;
atom[77].boilingp=4100;

strcpy(atom[78].name,"GOLD");
strcpy(atom[78].symbol,"Au");
atom[78].atomicnum=79;
atom[78].atomicwt=196.96;
strcpy(atom[78].crystruct,"fcc");
atom[78].atomicrad=144;
strcpy(atom[78].oxidnno,"1,3");
atom[78].ionicrad=137;
strcpy(atom[78].ionenergy,"9.225,20.5");
atom[78].eaffinity=2.1;
atom[78].enegativity=2.4;
atom[78].density=19300;
atom[78].meltingp=1336.1;
atom[78].boilingp=3239;

strcpy(atom[79].name,"MERCURY");
strcpy(atom[79].symbol,"Hg");
atom[79].atomicnum=80;
atom[79].atomicwt=200.59;
strcpy(atom[79].crystruct,"rhombic");
atom[79].atomicrad=156;
strcpy(atom[79].oxidnno,"1,2");
atom[79].ionicrad=127;
strcpy(atom[79].ionenergy,"10.437,18.756");
atom[79].eaffinity=1.54;
atom[79].enegativity=1.9;
atom[79].density=13590;
atom[79].meltingp=234.3;
atom[79].boilingp=629.7;

strcpy(atom[80].name,"THALLIUM");
strcpy(atom[80].symbol,"Tl");
atom[80].atomicnum=81;
atom[80].atomicwt=204.38;
strcpy(atom[80].crystruct,"hcp/fcc");
atom[80].atomicrad=171;
strcpy(atom[80].oxidnno,"1");
atom[80].ionicrad=147;
strcpy(atom[80].ionenergy,"6.108,20.428");
atom[80].eaffinity=00;
atom[80].enegativity=1.8;
atom[80].density=11860;
atom[80].meltingp=576.6;
atom[80].boilingp=1730;

strcpy(atom[81].name,"LEAD");
strcpy(atom[81].symbol,"Pb");
atom[81].atomicnum=82;
atom[81].atomicwt=201.20;
strcpy(atom[81].crystruct,"fcc");
atom[81].atomicrad=174;
strcpy(atom[81].oxidnno,"2,4");
atom[81].ionicrad=120;
strcpy(atom[81].ionenergy,"7.416,15.032");
atom[81].eaffinity=00;
atom[81].enegativity=1.8;
atom[81].density=11340;
atom[81].meltingp=600.4;
atom[81].boilingp=2017;

strcpy(atom[82].name,"BISMITH");
strcpy(atom[82].symbol,"Bi");
atom[82].atomicnum=83;
atom[82].atomicwt=208.98;
strcpy(atom[82].crystruct,"rhombic");
atom[82].atomicrad=155;
strcpy(atom[82].oxidnno,"3,5");
atom[82].ionicrad=96;
strcpy(atom[82].ionenergy,"7.289,16.69");
atom[82].eaffinity=0.7;
atom[82].enegativity=1.9;
atom[82].density=9800;
atom[82].meltingp=544.4;
atom[82].boilingp=1830;

strcpy(atom[83].name,"POLONIUM");
strcpy(atom[83].symbol,"Po");
atom[83].atomicnum=84;
atom[83].atomicwt=209.00;
strcpy(atom[83].crystruct,"monoclinic");
atom[83].atomicrad=168;
strcpy(atom[83].oxidnno,"2,6");
atom[83].ionicrad=67;
strcpy(atom[83].ionenergy,"8.42,19.4");
atom[83].eaffinity=00;
atom[83].enegativity=2.0;
atom[83].density=9400;
atom[83].meltingp=527;
atom[83].boilingp=1235;

strcpy(atom[84].name,"Astatine");
strcpy(atom[84].symbol,"At");
atom[84].atomicnum=85;
atom[84].atomicwt=210.00;
strcpy(atom[84].crystruct,"~orthorhombic");
atom[84].atomicrad=00;
strcpy(atom[84].oxidnno,"7");
atom[84].ionicrad=62;
strcpy(atom[84].ionenergy,"9.5");
atom[84].eaffinity=00;
atom[84].enegativity=2.2;
atom[84].density=00;
atom[84].meltingp=520;
atom[84].boilingp=623;

strcpy(atom[85].name,"RADON");
strcpy(atom[85].symbol,"Rn");
atom[85].atomicnum=86;
atom[85].atomicwt=222.00;
strcpy(atom[85].crystruct,"monoatomic");
atom[85].atomicrad=00;
strcpy(atom[85].oxidnno,"0");
atom[85].ionicrad=00;
strcpy(atom[85].ionenergy,"10.748");
atom[85].eaffinity=00;
atom[85].enegativity=0.9;
atom[85].density=5000;
atom[85].meltingp=970;
atom[85].boilingp=1410;

strcpy(atom[86].name,"FRANCIUM");
strcpy(atom[86].symbol,"Fr");
atom[86].atomicnum=87;
atom[86].atomicwt=223.00;
strcpy(atom[86].crystruct,"nil");
atom[86].atomicrad=00;
strcpy(atom[86].oxidnno,"1");
atom[86].ionicrad=187;
strcpy(atom[86].ionenergy,"4.0");
atom[86].eaffinity=00;
atom[86].enegativity=0.7;
atom[86].density=00;
atom[86].meltingp=303;
atom[86].boilingp=920;

strcpy(atom[87].name,"RADIUM");
strcpy(atom[87].symbol,"Ra");
atom[87].atomicnum=88;
atom[87].atomicwt=226.00;
strcpy(atom[87].crystruct,"nil");
atom[87].atomicrad=00;
strcpy(atom[87].oxidnno,"2");
atom[87].ionicrad=143;
strcpy(atom[87].ionenergy,"5.279,10.147");
atom[87].eaffinity=00;
atom[87].enegativity=0.9;
atom[87].density=5000;
atom[87].meltingp=970;
atom[87].boilingp=1410;

strcpy(atom[88].name,"ACTINIUM");
strcpy(atom[88].symbol,"Ac");
atom[88].atomicnum=89;
atom[88].atomicwt=227.00;
strcpy(atom[88].crystruct,"fcc");
atom[88].atomicrad=188;
strcpy(atom[88].oxidnno,"3");
atom[88].ionicrad=118;
strcpy(atom[88].ionenergy,"6.9,12.1");
atom[88].eaffinity=00;
atom[88].enegativity=1.1;
atom[88].density=10100;
atom[88].meltingp=1320;
atom[88].boilingp=3470;

strcpy(atom[89].name,"THORIUM");
strcpy(atom[89].symbol,"Th");
atom[89].atomicnum=90;
atom[89].atomicwt=232.03;
strcpy(atom[89].crystruct,"bcc/fcc");
atom[89].atomicrad=180;
strcpy(atom[89].oxidnno,"4");
atom[89].ionicrad=102;
strcpy(atom[89].ionenergy,"6.95,11.5");
atom[89].eaffinity=00;
atom[89].enegativity=1.3;
atom[89].density=11500;
atom[89].meltingp=2000;
atom[89].boilingp=4500;

strcpy(atom[90].name,"PROTACTINIUM");
strcpy(atom[90].symbol,"Pa");
atom[90].atomicnum=91;
atom[90].atomicwt=231.03;
strcpy(atom[90].crystruct,"tetra");
atom[90].atomicrad=160;
strcpy(atom[90].oxidnno,"3,4");
atom[90].ionicrad=113;
strcpy(atom[90].ionenergy,"unknown");
atom[90].eaffinity=00;
atom[90].enegativity=1.5;
atom[90].density=15400;
atom[90].meltingp=1500;
atom[90].boilingp=4300;

strcpy(atom[91].name,"URANIUM");
strcpy(atom[91].symbol,"U");
atom[91].atomicnum=92;
atom[91].atomicwt=238.02;
strcpy(atom[91].crystruct,"rhombic/tetra");
atom[91].atomicrad=138;
strcpy(atom[91].oxidnno,"4,6");
atom[91].ionicrad=97;
strcpy(atom[91].ionenergy,"6.08");
atom[91].eaffinity=0.94;
atom[91].enegativity=1.7;
atom[91].density=19050;
atom[91].meltingp=1405.4;
atom[91].boilingp=4091;

strcpy(atom[92].name,"NEPTUNIUM");
strcpy(atom[92].symbol,"Np");
atom[92].atomicnum=93;
atom[92].atomicwt=237.00;

strcpy(atom[93].name,"PLUTONIUM");
strcpy(atom[93].symbol,"Pu");
atom[93].atomicnum=94;
atom[93].atomicwt=244.00;

strcpy(atom[94].name,"AMERICIUM");
strcpy(atom[94].symbol,"Am");
atom[94].atomicnum=95;
atom[94].atomicwt=243.00;

strcpy(atom[95].name,"CURIUM");
strcpy(atom[95].symbol,"Cm");
atom[95].atomicnum=96;
atom[95].atomicwt=247.00;

strcpy(atom[96].name,"BERKELIUM");
strcpy(atom[96].symbol,"Bk");
atom[96].atomicnum=97;
atom[96].atomicwt=247.00;

strcpy(atom[97].name,"CALIFONIUM");
strcpy(atom[97].symbol,"Cf");
atom[97].atomicnum=98;
atom[97].atomicwt=251.00;

strcpy(atom[98].name,"EINSTEINIUM");
strcpy(atom[98].symbol,"Es");
atom[98].atomicnum=99;
atom[98].atomicwt=252.00;

strcpy(atom[99].name,"FERMIUM");
strcpy(atom[99].symbol,"Fm");
atom[99].atomicnum=257.00;
atom[99].atomicwt=231.03;

strcpy(atom[100].name,"MENDELEVIUM");
strcpy(atom[100].symbol,"Md");
atom[100].atomicnum=101;
atom[100].atomicwt=258.00;

strcpy(atom[101].name,"NOBELIUM");
strcpy(atom[101].symbol,"Np");
atom[101].atomicnum=102;
atom[101].atomicwt=259.00;

strcpy(atom[102].name,"LAWRENCIUM");
strcpy(atom[102].symbol,"Lr");
atom[102].atomicnum=103;
atom[102].atomicwt=262.00;

strcpy(atom[103].name,"RUTHERFORDIUM");
strcpy(atom[103].symbol,"Rf");
atom[103].atomicnum=104;
atom[103].atomicwt=261.00;

strcpy(atom[104].name,"DUBNIUM");
strcpy(atom[104].symbol,"Db");
atom[104].atomicnum=105;
atom[104].atomicwt=262.00;

strcpy(atom[105].name,"SEABORGIUM");
strcpy(atom[105].symbol,"Sg");
atom[105].atomicnum=106;
atom[105].atomicwt=266.00;

strcpy(atom[106].name,"BOHRIUM");
strcpy(atom[106].symbol,"Bh");
atom[106].atomicnum=107;
atom[106].atomicwt=264.00;

strcpy(atom[107].name,"HASSSIUM");
strcpy(atom[107].symbol,"Hs");
atom[107].atomicnum=108;
atom[107].atomicwt=277.00;

strcpy(atom[108].name,"Meinerium");
strcpy(atom[108].symbol,"Mt");
atom[108].atomicnum=109;
atom[108].atomicwt=268.00;


}


int i;

//void search();

void clrscr() {
    system("@cls||clear");
}

void newScreen() {
	//clrscr();
	int width = 132;
	char str[] = "\033[31;1;51;4mPERIODIC TABLE\033[0m\n";
	int length = sizeof(str) - 1;
	int pad = (length >= width) ? 0 : (width - length) / 2;
	printf("%*.*s%s\n", pad, pad, " ", str);
	for(int i=0; i<10; i++){
		printf("\n");
	}
}
/*
void quit() {
	newScreen();
	char ans[5];
	printf("\033[31mARE YOU SURE YOU WANT TO QUIT?\033[0m");
	scanf("%s",ans);
	if (tolower(ans[0])=='y'){
		printf("\n\n\n\n\033[35mTHANK YOU\033[0m\n\n");
	} else {
		main();
	}
}
*/
/*
void again() {
	char ans1[5];
	printf("\n\n\n\n\033[32mSEARCH FOR A DIFFERENT ELEMENT? : \033[0m");
	scanf("%s",ans1);
	if (tolower(ans1[0])=='y'){
		search();
	} else {
		quit();
	}
	printf("\n\n\n\n\n\n\n\n\n\n");
}
*/
int info1(char* el) {
	int flag=0;
	newScreen();
	char ele[20];
//	printf("\033[32mENTER THE ELEMENT'S NAME : \033[0m");
	strcpy(ele,el);
//	scanf("%s",ele);
	for (i=0; i<118; i++) {
		if (strcmp(atom[i].name,ele)==0){
			printf("\033[34m\n\n\tELEMENT : %s\033[0m\n",atom[i].name);
			printf("\033[34m\n\n\tSYMBOL : %s\033[0m\n",atom[i].symbol);
			printf("\033[34m\n\n\tATOMIC NUMBER : %d\033[0m\n",atom[i].atomicnum);
			printf("\033[34m\n\n\tATOMIC WEIGHT : %d\033[0m\n",atom[i].atomicwt);
			printf("\033[34m\n\n\tCRYSTAL STRUCTURE : %s\033[0m\n",atom[i].crystruct);
			printf("\033[34m\n\n\tATOMIC RADIUS : %f pm\033[0m\n",atom[i].atomicrad);
			printf("\033[34m\n\n\tPRINCIPAL OXIDATION STATES : %s\033[0m\n",atom[i].oxidnno);
			printf("\033[34m\n\n\tIONIC RADIUS : %d pm\033[0m\n",atom[i].ionicrad);
			printf("\033[34m\n\n\tIONISATION ENERGIES : %s eV\033[0m\n",atom[i].ionenergy);
			printf("\033[34m\n\n\tELECTRON AFFINITIES : %f eV\033[0m\n",atom[i].eaffinity);
			printf("\033[34m\n\n\tELECTRONEGATIVITY : %f\033[0m\n",atom[i].enegativity);
			printf("\033[34m\n\n\tDENSITY : %f kgm^-3\033[0m\n",atom[i].density);
			printf("\033[34m\n\n\tMELTING POINT : %f K\033[0m\n",atom[i].meltingp);
			printf("\033[34m\n\n\tBOILING POINT : %f K\033[0m\n",atom[i].boilingp);
			flag=1;
			break;
		}
	}
	return flag;
	//again();
}

int info2(char* sy) {
	newScreen();
	int flag=0;
	char sym[1];
//	printf("\033[32mENTER THE ELEMENT'S SYMBOL : \033[0m");
	strcpy(sym,sy);
//	scanf("%s",sym);
	for (i=0; i<118; i++) {
		if (strcmp(atom[i].symbol,sym)==0){
			printf("\033[34m\n\n\tELEMENT : %s\033[0m\n",atom[i].name);
			printf("\033[34m\n\n\tSYMBOL : %s\033[0m\n",atom[i].symbol);
			printf("\033[34m\n\n\tATOMIC NUMBER : %d\033[0m\n",atom[i].atomicnum);
			printf("\033[34m\n\n\tATOMIC WEIGHT : %d\033[0m\n",atom[i].atomicwt);
			printf("\033[34m\n\n\tCRYSTAL STRUCTURE : %s\033[0m\n",atom[i].crystruct);
			printf("\033[34m\n\n\tATOMIC RADIUS : %f pm\033[0m\n",atom[i].atomicrad);
			printf("\033[34m\n\n\tPRINCIPAL OXIDATION STATES : %s\033[0m\n",atom[i].oxidnno);
			printf("\033[34m\n\n\tIONIC RADIUS : %d pm\033[0m\n",atom[i].ionicrad);
			printf("\033[34m\n\n\tIONISATION ENERGIES : %s eV\033[0m\n",atom[i].ionenergy);
			printf("\033[34m\n\n\tELECTRON AFFINITIES : %f eV\033[0m\n",atom[i].eaffinity);
			printf("\033[34m\n\n\tELECTRONEGATIVITY : %f\033[0m\n",atom[i].enegativity);
			printf("\033[34m\n\n\tDENSITY : %f kgm^-3\033[0m\n",atom[i].density);
			printf("\033[34m\n\n\tMELTING POINT : %f K\033[0m\n",atom[i].meltingp);
			printf("\033[34m\n\n\tBOILING POINT : %f K\033[0m\n",atom[i].boilingp);
			flag=1;
			break;
		}
	}
	return flag;
	//again();
}

int info3(int an) {
	newScreen();
	int flag=0;
	int atn;
//	printf("\033[32mENTER THE ELEMENT'S ATOMIC NUMBER : \033[0m");
	atn=an;
//	scanf("%d",&atn);
	for (i=0; i<118; i++) {
		if (atom[i].atomicnum==atn){
			printf("\033[34m\n\n\tELEMENT : %s\033[0m\n",atom[i].name);
			printf("\033[34m\n\n\tSYMBOL : %s\033[0m\n",atom[i].symbol);
			printf("\033[34m\n\n\tATOMIC NUMBER : %d\033[0m\n",atom[i].atomicnum);
			printf("\033[34m\n\n\tATOMIC WEIGHT : %d\033[0m\n",atom[i].atomicwt);
			printf("\033[34m\n\n\tCRYSTAL STRUCTURE : %s\033[0m\n",atom[i].crystruct);
			printf("\033[34m\n\n\tATOMIC RADIUS : %f pm\033[0m\n",atom[i].atomicrad);
			printf("\033[34m\n\n\tPRINCIPAL OXIDATION STATES : %s\033[0m\n",atom[i].oxidnno);
			printf("\033[34m\n\n\tIONIC RADIUS : %d pm\033[0m\n",atom[i].ionicrad);
			printf("\033[34m\n\n\tIONISATION ENERGIES : %s eV\033[0m\n",atom[i].ionenergy);
			printf("\033[34m\n\n\tELECTRON AFFINITIES : %f eV\033[0m\n",atom[i].eaffinity);
			printf("\033[34m\n\n\tELECTRONEGATIVITY : %f\033[0m\n",atom[i].enegativity);
			printf("\033[34m\n\n\tDENSITY : %f kgm^-3\033[0m\n",atom[i].density);
			printf("\033[34m\n\n\tMELTING POINT : %f K\033[0m\n",atom[i].meltingp);
			printf("\033[34m\n\n\tBOILING POINT : %f K\033[0m\n",atom[i].boilingp);
			flag=1;
			break;
		}
	}
	return flag;
	//again();
}

int info4(int awt) {
	newScreen();
	int flag=0;
	int atwt;
//	printf("\033[32mENTER THE ELEMENT'S ATOMIC WEIGHT : \033[0m");
	atwt=awt;
//	scanf("%f",&atwt);
	for (i=0; i<118; i++) {
		if (atom[i].atomicwt==atwt){
			printf("\033[34m\n\n\tELEMENT : %s\033[0m\n",atom[i].name);
			printf("\033[34m\n\n\tSYMBOL : %s\033[0m\n",atom[i].symbol);
			printf("\033[34m\n\n\tATOMIC NUMBER : %d\033[0m\n",atom[i].atomicnum);
			printf("\033[34m\n\n\tATOMIC WEIGHT : %d\033[0m\n",atom[i].atomicwt);
			printf("\033[34m\n\n\tCRYSTAL STRUCTURE : %s\033[0m\n",atom[i].crystruct);
			printf("\033[34m\n\n\tATOMIC RADIUS : %f pm\033[0m\n",atom[i].atomicrad);
			printf("\033[34m\n\n\tPRINCIPAL OXIDATION STATES : %s\033[0m\n",atom[i].oxidnno);
			printf("\033[34m\n\n\tIONIC RADIUS : %d pm\033[0m\n",atom[i].ionicrad);
			printf("\033[34m\n\n\tIONISATION ENERGIES : %s eV\033[0m\n",atom[i].ionenergy);
			printf("\033[34m\n\n\tELECTRON AFFINITIES : %f eV\033[0m\n",atom[i].eaffinity);
			printf("\033[34m\n\n\tELECTRONEGATIVITY : %f\033[0m\n",atom[i].enegativity);
			printf("\033[34m\n\n\tDENSITY : %f kgm^-3\033[0m\n",atom[i].density);
			printf("\033[34m\n\n\tMELTING POINT : %f K\033[0m\n",atom[i].meltingp);
			printf("\033[34m\n\n\tBOILING POINT : %f K\033[0m\n",atom[i].boilingp);
			flag=1;
			break;
		}
	}
	return flag;
	//again();
}
/*
void search() {
	newScreen();
	printf("\033[33mSREACH BY :- \033[0m\n\n");
	printf("\033[34m\t1 -> ELEMENT\033[0m\n");
	printf("\033[34m\t2 -> SYMBOL\033[0m\n");
	printf("\033[34m\t3 -> ATOMIC NUMBER\033[0m\n");
	printf("\033[34m\t4 -> ATOMIC WEIGHT\033[0m\n\n\n\n");
	int choice2;
	printf("\033[32mYOUR CHOICE : \033[0m");
	scanf("%d",&choice2);
	if (choice2==1){
		char el[20];
        printf("\033[32mENTER THE ELEMENT'S NAME : \033[0m");
        scanf("%s",el);
		info1(el);
	} else if (choice2==2){
	    char sy[1];
        printf("\033[32mENTER THE ELEMENT'S SYMBOL : \033[0m");
        scanf("%s",sy);
		info2(sy);
	} else if (choice2==3){
		info3();
	} else if (choice2==4){
		info4();
	} else {
		search();
	}
}

int main() {
	newScreen();
	printf("\033[34m1 -> EXPLORE\033[0m\n");
	printf("\033[34m2 -> QUIT\033[0m\n\n\n\n");
	int choice1;
	printf("\033[32mYOUR CHOICE : \033[0m");
	scanf("%d",&choice1);
	table();
	if (choice1==1){
		search();
	} else if (choice1==2){
		quit();
	} else {
		main();
	}
}
*/
