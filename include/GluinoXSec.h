std::pair<double, double> GetGluinoXSec(double Gluino_Mass) {
  int mass_round = std::round(Gluino_Mass/5)*5;
  switch (mass_round) {
  case 200: return std::pair<double, double>(3574.52, 14.0616);
  case 205: return std::pair<double, double>(3183.21, 14.0078);
  case 210: return std::pair<double, double>(2832.93, 13.9497);
  case 215: return std::pair<double, double>(2528.15, 13.9683);
  case 220: return std::pair<double, double>(2259.15, 14.1828);
  case 225: return std::pair<double, double>(2021.29, 13.8804);
  case 230: return std::pair<double, double>(1813.06, 14.0218);
  case 235: return std::pair<double, double>(1630.97, 13.7824);
  case 240: return std::pair<double, double>(1468.71, 14.1371);
  case 245: return std::pair<double, double>(1321.73, 14.1639);
  case 250: return std::pair<double, double>(1190.35, 13.79);
  case 255: return std::pair<double, double>(1079.09, 14.1224);
  case 260: return std::pair<double, double>(974.613, 13.8033);
  case 265: return std::pair<double, double>(884.867, 13.9004);
  case 270: return std::pair<double, double>(803.354, 13.9615);
  case 275: return std::pair<double, double>(730.663, 13.9062);
  case 280: return std::pair<double, double>(664.936, 13.9583);
  case 285: return std::pair<double, double>(605.955, 13.8771);
  case 290: return std::pair<double, double>(553.028, 13.9562);
  case 295: return std::pair<double, double>(505.51, 13.892);
  case 300: return std::pair<double, double>(462.593, 13.8965);
  case 305: return std::pair<double, double>(423.86, 13.8693);
  case 310: return std::pair<double, double>(388.489, 13.931);
  case 315: return std::pair<double, double>(357.206, 13.9637);
  case 320: return std::pair<double, double>(328.507, 13.8359);
  case 325: return std::pair<double, double>(302.328, 13.7667);
  case 330: return std::pair<double, double>(278.679, 13.9051);
  case 335: return std::pair<double, double>(257.028, 14.0072);
  case 340: return std::pair<double, double>(236.848, 13.8858);
  case 345: return std::pair<double, double>(219.27, 13.9344);
  case 350: return std::pair<double, double>(202.663, 14.0017);
  case 355: return std::pair<double, double>(188.12, 13.9853);
  case 360: return std::pair<double, double>(174.5, 13.9599);
  case 365: return std::pair<double, double>(161.954, 13.9485);
  case 370: return std::pair<double, double>(150.415, 13.8693);
  case 375: return std::pair<double, double>(139.838, 13.7851);
  case 380: return std::pair<double, double>(129.783, 14.1158);
  case 385: return std::pair<double, double>(121.226, 13.8818);
  case 390: return std::pair<double, double>(112.715, 13.7689);
  case 395: return std::pair<double, double>(105.154, 13.5329);
  case 400: return std::pair<double, double>(98.0459, 13.8343);
  case 405: return std::pair<double, double>(91.457, 13.8074);
  case 410: return std::pair<double, double>(85.32, 13.8223);
  case 415: return std::pair<double, double>(79.7218, 13.8008);
  case 420: return std::pair<double, double>(74.5365, 13.8464);
  case 425: return std::pair<double, double>(69.7057, 13.796);
  case 430: return std::pair<double, double>(65.2467, 13.8063);
  case 435: return std::pair<double, double>(61.0917, 13.7678);
  case 440: return std::pair<double, double>(57.2741, 13.8107);
  case 445: return std::pair<double, double>(53.7048, 13.7458);
  case 450: return std::pair<double, double>(50.4009, 13.771);
  case 455: return std::pair<double, double>(47.2946, 13.7682);
  case 460: return std::pair<double, double>(44.3848, 13.7604);
  case 465: return std::pair<double, double>(41.734, 13.8596);
  case 470: return std::pair<double, double>(39.2299, 13.7836);
  case 475: return std::pair<double, double>(36.9223, 13.7173);
  case 480: return std::pair<double, double>(34.7729, 13.7767);
  case 485: return std::pair<double, double>(32.7265, 13.8065);
  case 490: return std::pair<double, double>(30.8133, 13.6781);
  case 495: return std::pair<double, double>(29.0606, 13.7001);
  case 500: return std::pair<double, double>(27.4171, 13.6843);
  case 505: return std::pair<double, double>(25.8591, 13.6726);
  case 510: return std::pair<double, double>(24.4095, 13.6471);
  case 515: return std::pair<double, double>(23.0195, 13.8083);
  case 520: return std::pair<double, double>(21.7643, 13.7462);
  case 525: return std::pair<double, double>(20.5106, 13.7124);
  case 530: return std::pair<double, double>(19.4189, 13.8652);
  case 535: return std::pair<double, double>(18.3635, 13.7629);
  case 540: return std::pair<double, double>(17.4166, 13.5766);
  case 545: return std::pair<double, double>(16.4219, 13.7981);
  case 550: return std::pair<double, double>(15.5705, 13.6046);
  case 555: return std::pair<double, double>(14.7736, 13.7213);
  case 560: return std::pair<double, double>(13.9732, 13.9263);
  case 565: return std::pair<double, double>(13.2291, 13.686);
  case 570: return std::pair<double, double>(12.5756, 13.4127);
  case 575: return std::pair<double, double>(11.9324, 13.9887);
  case 580: return std::pair<double, double>(11.2814, 13.7528);
  case 585: return std::pair<double, double>(10.7311, 13.3747);
  case 590: return std::pair<double, double>(10.1857, 14.0044);
  case 595: return std::pair<double, double>(9.68722, 13.7127);
  case 600: return std::pair<double, double>(9.20353, 13.7185);
  case 605: return std::pair<double, double>(8.74315, 13.7502);
  case 610: return std::pair<double, double>(8.30988, 13.6818);
  case 615: return std::pair<double, double>(7.9012, 13.7122);
  case 620: return std::pair<double, double>(7.51811, 13.6123);
  case 625: return std::pair<double, double>(7.15194, 13.6874);
  case 630: return std::pair<double, double>(6.80558, 13.6655);
  case 635: return std::pair<double, double>(6.47541, 13.6459);
  case 640: return std::pair<double, double>(6.17196, 13.6449);
  case 645: return std::pair<double, double>(5.87366, 13.6392);
  case 650: return std::pair<double, double>(5.60048, 13.6262);
  case 655: return std::pair<double, double>(5.33799, 13.7031);
  case 660: return std::pair<double, double>(5.09822, 13.7329);
  case 665: return std::pair<double, double>(4.86409, 13.7702);
  case 670: return std::pair<double, double>(4.64349, 13.8022);
  case 675: return std::pair<double, double>(4.43132, 13.8749);
  case 680: return std::pair<double, double>(4.23046, 13.9166);
  case 685: return std::pair<double, double>(4.03841, 13.9934);
  case 690: return std::pair<double, double>(3.85666, 13.9917);
  case 695: return std::pair<double, double>(3.68567, 14.0759);
  case 700: return std::pair<double, double>(3.5251, 14.1034);
  case 705: return std::pair<double, double>(3.3737, 14.1609);
  case 710: return std::pair<double, double>(3.22336, 14.1972);
  case 715: return std::pair<double, double>(3.0811, 14.2311);
  case 720: return std::pair<double, double>(2.9509, 14.2518);
  case 725: return std::pair<double, double>(2.81957, 14.3333);
  case 730: return std::pair<double, double>(2.7, 14.3772);
  case 735: return std::pair<double, double>(2.57737, 14.4452);
  case 740: return std::pair<double, double>(2.47729, 14.4485);
  case 745: return std::pair<double, double>(2.3661, 14.5381);
  case 750: return std::pair<double, double>(2.26585, 14.5653);
  case 755: return std::pair<double, double>(2.17436, 14.5861);
  case 760: return std::pair<double, double>(2.08446, 14.6279);
  case 765: return std::pair<double, double>(1.99341, 14.7278);
  case 770: return std::pair<double, double>(1.91352, 14.7424);
  case 775: return std::pair<double, double>(1.83188, 14.7835);
  case 780: return std::pair<double, double>(1.76145, 14.8078);
  case 785: return std::pair<double, double>(1.68078, 14.8956);
  case 790: return std::pair<double, double>(1.62071, 14.9017);
  case 795: return std::pair<double, double>(1.54896, 14.9976);
  case 800: return std::pair<double, double>(1.4891, 15.0167);
  case 805: return std::pair<double, double>(1.42888, 15.0599);
  case 810: return std::pair<double, double>(1.36759, 15.1122);
  case 815: return std::pair<double, double>(1.31749, 15.1184);
  case 820: return std::pair<double, double>(1.26659, 15.1928);
  case 825: return std::pair<double, double>(1.2167, 15.2141);
  case 830: return std::pair<double, double>(1.16617, 15.2437);
  case 835: return std::pair<double, double>(1.12555, 15.3009);
  case 840: return std::pair<double, double>(1.07523, 15.367);
  case 845: return std::pair<double, double>(1.03426, 15.4018);
  case 850: return std::pair<double, double>(0.996137, 15.4252);
  case 855: return std::pair<double, double>(0.957975, 15.4597);
  case 860: return std::pair<double, double>(0.921447, 15.5362);
  case 865: return std::pair<double, double>(0.885917, 15.5643);
  case 870: return std::pair<double, double>(0.852433, 15.6368);
  case 875: return std::pair<double, double>(0.820259, 15.6742);
  case 880: return std::pair<double, double>(0.788789, 15.6746);
  case 885: return std::pair<double, double>(0.759346, 15.7507);
  case 890: return std::pair<double, double>(0.731213, 15.7879);
  case 895: return std::pair<double, double>(0.703532, 15.8276);
  case 900: return std::pair<double, double>(0.677478, 15.8762);
  case 905: return std::pair<double, double>(0.652317, 15.914);
  case 910: return std::pair<double, double>(0.627695, 15.9569);
  case 915: return std::pair<double, double>(0.605596, 15.9838);
  case 920: return std::pair<double, double>(0.58302, 16.029);
  case 925: return std::pair<double, double>(0.561889, 16.0626);
  case 930: return std::pair<double, double>(0.540533, 16.1499);
  case 935: return std::pair<double, double>(0.521159, 16.1607);
  case 940: return std::pair<double, double>(0.501865, 16.245);
  case 945: return std::pair<double, double>(0.483546, 16.2492);
  case 950: return std::pair<double, double>(0.466352, 16.3378);
  case 955: return std::pair<double, double>(0.45012, 16.3303);
  case 960: return std::pair<double, double>(0.433842, 16.4161);
  case 965: return std::pair<double, double>(0.418744, 16.4473);
  case 970: return std::pair<double, double>(0.403514, 16.4538);
  case 975: return std::pair<double, double>(0.389266, 16.5308);
  case 980: return std::pair<double, double>(0.375053, 16.5398);
  case 985: return std::pair<double, double>(0.36182, 16.619);
  case 990: return std::pair<double, double>(0.349764, 16.6462);
  case 995: return std::pair<double, double>(0.337454, 16.6888);
  case 1000: return std::pair<double, double>(0.325388, 16.758);
  case 1005: return std::pair<double, double>(0.314329, 16.7865);
  case 1010: return std::pair<double, double>(0.30314, 16.8766);
  case 1015: return std::pair<double, double>(0.292987, 16.8793);
  case 1020: return std::pair<double, double>(0.282927, 16.9098);
  case 1025: return std::pair<double, double>(0.272778, 16.9917);
  case 1030: return std::pair<double, double>(0.263724, 17.0244);
  case 1035: return std::pair<double, double>(0.254721, 17.0758);
  case 1040: return std::pair<double, double>(0.245426, 17.1325);
  case 1045: return std::pair<double, double>(0.237403, 17.1542);
  case 1050: return std::pair<double, double>(0.229367, 17.1975);
  case 1055: return std::pair<double, double>(0.221273, 17.2482);
  case 1060: return std::pair<double, double>(0.214167, 17.3167);
  case 1065: return std::pair<double, double>(0.207025, 17.3211);
  case 1070: return std::pair<double, double>(0.199967, 17.3603);
  case 1075: return std::pair<double, double>(0.193881, 17.4329);
  case 1080: return std::pair<double, double>(0.186836, 17.4816);
  case 1085: return std::pair<double, double>(0.180783, 17.5245);
  case 1090: return std::pair<double, double>(0.174652, 17.5336);
  case 1095: return std::pair<double, double>(0.168526, 17.6231);
  case 1100: return std::pair<double, double>(0.163491, 17.6402);
  case 1105: return std::pair<double, double>(0.158451, 17.6564);
  case 1110: return std::pair<double, double>(0.153298, 17.7266);
  case 1115: return std::pair<double, double>(0.148246, 17.7755);
  case 1120: return std::pair<double, double>(0.143169, 17.813);
  case 1125: return std::pair<double, double>(0.139009, 17.8569);
  case 1130: return std::pair<double, double>(0.133972, 17.9205);
  case 1135: return std::pair<double, double>(0.129938, 17.938);
  case 1140: return std::pair<double, double>(0.125799, 17.9658);
  case 1145: return std::pair<double, double>(0.121755, 18.0222);
  case 1150: return std::pair<double, double>(0.117687, 18.0655);
  case 1155: return std::pair<double, double>(0.11358, 18.1327);
  case 1160: return std::pair<double, double>(0.110557, 18.1465);
  case 1165: return std::pair<double, double>(0.107532, 18.1655);
  case 1170: return std::pair<double, double>(0.10339, 18.2421);
  case 1175: return std::pair<double, double>(0.10036, 18.2686);
  case 1180: return std::pair<double, double>(0.0971485, 18.3142);
  case 1185: return std::pair<double, double>(0.0942072, 18.3623);
  case 1190: return std::pair<double, double>(0.0912756, 18.3957);
  case 1195: return std::pair<double, double>(0.0883712, 18.4467);
  case 1200: return std::pair<double, double>(0.0856418, 18.4814);
  case 1205: return std::pair<double, double>(0.0830236, 18.5276);
  case 1210: return std::pair<double, double>(0.0804313, 18.5714);
  case 1215: return std::pair<double, double>(0.0779039, 18.6096);
  case 1220: return std::pair<double, double>(0.0755801, 18.6429);
  case 1225: return std::pair<double, double>(0.0732255, 18.7227);
  case 1230: return std::pair<double, double>(0.0709683, 18.7266);
  case 1235: return std::pair<double, double>(0.0688462, 18.7544);
  case 1240: return std::pair<double, double>(0.0666928, 18.8404);
  case 1245: return std::pair<double, double>(0.0646423, 18.8414);
  case 1250: return std::pair<double, double>(0.0627027, 18.9328);
  case 1255: return std::pair<double, double>(0.0607803, 18.9693);
  case 1260: return std::pair<double, double>(0.0589319, 18.9695);
  case 1265: return std::pair<double, double>(0.0571859, 19.0561);
  case 1270: return std::pair<double, double>(0.0554225, 19.1806);
  case 1275: return std::pair<double, double>(0.0536906, 19.2452);
  case 1280: return std::pair<double, double>(0.052051, 19.2396);
  case 1285: return std::pair<double, double>(0.0504982, 19.3577);
  case 1290: return std::pair<double, double>(0.0489404, 19.4903);
  case 1295: return std::pair<double, double>(0.047474, 19.5871);
  case 1300: return std::pair<double, double>(0.0460525, 19.64);
  case 1305: return std::pair<double, double>(0.0447038, 19.7627);
  case 1310: return std::pair<double, double>(0.0433373, 19.8601);
  case 1315: return std::pair<double, double>(0.0420362, 19.8634);
  case 1320: return std::pair<double, double>(0.0407723, 19.9586);
  case 1325: return std::pair<double, double>(0.0395728, 19.951);
  case 1330: return std::pair<double, double>(0.0383587, 19.993);
  case 1335: return std::pair<double, double>(0.0372043, 20.1012);
  case 1340: return std::pair<double, double>(0.0361694, 20.2191);
  case 1345: return std::pair<double, double>(0.0350586, 20.1714);
  case 1350: return std::pair<double, double>(0.0340187, 20.3088);
  case 1355: return std::pair<double, double>(0.0330251, 20.2807);
  case 1360: return std::pair<double, double>(0.0320787, 20.3682);
  case 1365: return std::pair<double, double>(0.0311325, 20.5466);
  case 1370: return std::pair<double, double>(0.0302294, 20.4724);
  case 1375: return std::pair<double, double>(0.0292919, 20.6217);
  case 1380: return std::pair<double, double>(0.0284627, 20.7773);
  case 1385: return std::pair<double, double>(0.0276679, 20.6729);
  case 1390: return std::pair<double, double>(0.0268339, 20.8251);
  case 1395: return std::pair<double, double>(0.0260313, 20.7488);
  case 1400: return std::pair<double, double>(0.0252977, 20.9163);
  case 1405: return std::pair<double, double>(0.0245679, 21.0704);
  case 1410: return std::pair<double, double>(0.0238741, 20.9586);
  case 1415: return std::pair<double, double>(0.0231433, 21.1204);
  case 1420: return std::pair<double, double>(0.0225194, 21.2481);
  case 1425: return std::pair<double, double>(0.0218959, 21.4183);
  case 1430: return std::pair<double, double>(0.0211928, 21.365);
  case 1435: return std::pair<double, double>(0.0206244, 21.7574);
  case 1440: return std::pair<double, double>(0.0200458, 21.6629);
  case 1445: return std::pair<double, double>(0.0194648, 21.5531);
  case 1450: return std::pair<double, double>(0.0188887, 21.9548);
  case 1455: return std::pair<double, double>(0.018364, 22.1266);
  case 1460: return std::pair<double, double>(0.0178858, 22.0054);
  case 1465: return std::pair<double, double>(0.0173622, 22.1916);
  case 1470: return std::pair<double, double>(0.0168403, 22.3972);
  case 1475: return std::pair<double, double>(0.0163556, 22.2173);
  case 1480: return std::pair<double, double>(0.0159386, 22.3581);
  case 1485: return std::pair<double, double>(0.0154568, 22.2281);
  case 1490: return std::pair<double, double>(0.0150345, 22.4111);
  case 1495: return std::pair<double, double>(0.0146102, 22.5293);
  case 1500: return std::pair<double, double>(0.0141903, 22.7296);
  case 1505: return std::pair<double, double>(0.01377, 22.9402);
  case 1510: return std::pair<double, double>(0.0133923, 22.6528);
  case 1515: return std::pair<double, double>(0.0130286, 23.2697);
  case 1520: return std::pair<double, double>(0.012649, 23.0194);
  case 1525: return std::pair<double, double>(0.0123374, 23.1801);
  case 1530: return std::pair<double, double>(0.0119628, 22.9449);
  case 1535: return std::pair<double, double>(0.0116378, 23.1293);
  case 1540: return std::pair<double, double>(0.0113183, 23.3535);
  case 1545: return std::pair<double, double>(0.0110039, 23.456);
  case 1550: return std::pair<double, double>(0.0107027, 23.4971);
  case 1555: return std::pair<double, double>(0.0103967, 23.505);
  case 1560: return std::pair<double, double>(0.0101149, 23.6723);
  case 1565: return std::pair<double, double>(0.00984079, 23.7486);
  case 1570: return std::pair<double, double>(0.00956216, 23.8011);
  case 1575: return std::pair<double, double>(0.00930893, 23.8712);
  case 1580: return std::pair<double, double>(0.00905112, 23.9145);
  case 1585: return std::pair<double, double>(0.00880102, 24.088);
  case 1590: return std::pair<double, double>(0.00856388, 24.1033);
  case 1595: return std::pair<double, double>(0.00832287, 24.2052);
  case 1600: return std::pair<double, double>(0.00810078, 24.2679);
  case 1605: return std::pair<double, double>(0.0078785, 24.3322);
  case 1610: return std::pair<double, double>(0.00767087, 24.4839);
  case 1615: return std::pair<double, double>(0.00745579, 24.5137);
  case 1620: return std::pair<double, double>(0.00725443, 24.569);
  case 1625: return std::pair<double, double>(0.00705942, 24.6853);
  case 1630: return std::pair<double, double>(0.00687457, 24.804);
  case 1635: return std::pair<double, double>(0.00668418, 24.8672);
  case 1640: return std::pair<double, double>(0.00651001, 24.9776);
  case 1645: return std::pair<double, double>(0.00633268, 25.0679);
  case 1650: return std::pair<double, double>(0.00616072, 25.138);
  case 1655: return std::pair<double, double>(0.00599673, 25.2591);
  case 1660: return std::pair<double, double>(0.00583243, 25.3829);
  case 1665: return std::pair<double, double>(0.00567868, 25.5006);
  case 1670: return std::pair<double, double>(0.00553066, 25.5203);
  case 1675: return std::pair<double, double>(0.00538094, 25.5439);
  case 1680: return std::pair<double, double>(0.00523764, 25.6602);
  case 1685: return std::pair<double, double>(0.00509647, 25.8745);
  case 1690: return std::pair<double, double>(0.0049577, 25.8847);
  case 1695: return std::pair<double, double>(0.00483094, 26.0944);
  case 1700: return std::pair<double, double>(0.00470323, 26.1021);
  case 1705: return std::pair<double, double>(0.0045807, 26.2095);
  case 1710: return std::pair<double, double>(0.00445824, 26.3238);
  case 1715: return std::pair<double, double>(0.0043369, 26.3092);
  case 1720: return std::pair<double, double>(0.00422488, 26.4093);
  case 1725: return std::pair<double, double>(0.00411276, 26.513);
  case 1730: return std::pair<double, double>(0.00400698, 26.7386);
  case 1735: return std::pair<double, double>(0.00389655, 26.7109);
  case 1740: return std::pair<double, double>(0.00379497, 26.8072);
  case 1745: return std::pair<double, double>(0.00370003, 27.04);
  case 1750: return std::pair<double, double>(0.00359842, 27.1502);
  case 1755: return std::pair<double, double>(0.00350486, 27.229);
  case 1760: return std::pair<double, double>(0.00341375, 27.3209);
  case 1765: return std::pair<double, double>(0.00332255, 27.416);
  case 1770: return std::pair<double, double>(0.00323809, 27.6458);
  case 1775: return std::pair<double, double>(0.00314866, 27.5834);
  case 1780: return std::pair<double, double>(0.00306841, 27.6481);
  case 1785: return std::pair<double, double>(0.00298808, 27.7145);
  case 1790: return std::pair<double, double>(0.00291365, 27.9548);
  case 1795: return std::pair<double, double>(0.0028312, 28.0642);
  case 1800: return std::pair<double, double>(0.00276133, 28.108);
  case 1805: return std::pair<double, double>(0.00269156, 28.1566);
  case 1810: return std::pair<double, double>(0.00262156, 28.2017);
  case 1815: return std::pair<double, double>(0.00254938, 28.2755);
  case 1820: return std::pair<double, double>(0.00248581, 28.5102);
  case 1825: return std::pair<double, double>(0.00241549, 28.5869);
  case 1830: return std::pair<double, double>(0.00235625, 28.6103);
  case 1835: return std::pair<double, double>(0.00229576, 28.596);
  case 1840: return std::pair<double, double>(0.00223603, 28.6654);
  case 1845: return std::pair<double, double>(0.00218302, 28.8949);
  case 1850: return std::pair<double, double>(0.00212345, 28.9167);
  case 1855: return std::pair<double, double>(0.00207, 29.1835);
  case 1860: return std::pair<double, double>(0.00200972, 29.1901);
  case 1865: return std::pair<double, double>(0.00196025, 29.2103);
  case 1870: return std::pair<double, double>(0.00191132, 29.1893);
  case 1875: return std::pair<double, double>(0.00185789, 29.4928);
  case 1880: return std::pair<double, double>(0.00181527, 29.723);
  case 1885: return std::pair<double, double>(0.00176658, 29.7236);
  case 1890: return std::pair<double, double>(0.00172274, 29.9813);
  case 1895: return std::pair<double, double>(0.00167806, 29.6455);
  case 1900: return std::pair<double, double>(0.00163547, 29.9045);
  case 1905: return std::pair<double, double>(0.0015925, 30.2039);
  case 1910: return std::pair<double, double>(0.00155445, 30.1015);
  case 1915: return std::pair<double, double>(0.00151503, 30.0356);
  case 1920: return std::pair<double, double>(0.00147199, 30.3575);
  case 1925: return std::pair<double, double>(0.0014401, 30.5951);
  case 1930: return std::pair<double, double>(0.0014016, 30.5171);
  case 1935: return std::pair<double, double>(0.00136297, 30.4873);
  case 1940: return std::pair<double, double>(0.001331, 30.7414);
  case 1945: return std::pair<double, double>(0.001299, 31.0066);
  case 1950: return std::pair<double, double>(0.0012642, 30.4581);
  case 1955: return std::pair<double, double>(0.00123087, 30.8644);
  case 1960: return std::pair<double, double>(0.00120048, 30.9669);
  case 1965: return std::pair<double, double>(0.00117053, 31.0216);
  case 1970: return std::pair<double, double>(0.00114051, 31.0814);
  case 1975: return std::pair<double, double>(0.00111722, 31.5357);
  case 1980: return std::pair<double, double>(0.00108758, 31.5568);
  case 1985: return std::pair<double, double>(0.00105813, 31.5103);
  case 1990: return std::pair<double, double>(0.00102936, 31.4167);
  case 1995: return std::pair<double, double>(0.00100614, 31.7628);
  case 2000: return std::pair<double, double>(0.000981077, 31.8422);
  case 2005: return std::pair<double, double>(0.000956613, 31.9751);
  case 2010: return std::pair<double, double>(0.000932325, 32.0882);
  case 2015: return std::pair<double, double>(0.000909408, 32.1466);
  case 2020: return std::pair<double, double>(0.000886417, 32.2175);
  case 2025: return std::pair<double, double>(0.000863806, 32.3142);
  case 2030: return std::pair<double, double>(0.00084231, 32.4635);
  case 2035: return std::pair<double, double>(0.000821016, 32.5832);
  case 2040: return std::pair<double, double>(0.00080083, 32.6879);
  case 2045: return std::pair<double, double>(0.000781098, 32.7197);
  case 2050: return std::pair<double, double>(0.000761286, 32.9341);
  case 2055: return std::pair<double, double>(0.000742602, 32.9529);
  case 2060: return std::pair<double, double>(0.000724162, 33.1309);
  case 2065: return std::pair<double, double>(0.000706078, 33.2221);
  case 2070: return std::pair<double, double>(0.000688773, 33.2606);
  case 2075: return std::pair<double, double>(0.000671106, 33.47);
  case 2080: return std::pair<double, double>(0.000654555, 33.4624);
  case 2085: return std::pair<double, double>(0.000638154, 33.6239);
  case 2090: return std::pair<double, double>(0.000622299, 33.6944);
  case 2095: return std::pair<double, double>(0.000606772, 33.8846);
  case 2100: return std::pair<double, double>(0.000591918, 33.9326);
  case 2105: return std::pair<double, double>(0.000577016, 33.9891);
  case 2110: return std::pair<double, double>(0.000562775, 34.126);
  case 2115: return std::pair<double, double>(0.000548803, 34.1942);
  case 2120: return std::pair<double, double>(0.000535625, 34.3143);
  case 2125: return std::pair<double, double>(0.000522481, 34.4322);
  case 2130: return std::pair<double, double>(0.000509317, 34.5795);
  case 2135: return std::pair<double, double>(0.000496197, 34.6013);
  case 2140: return std::pair<double, double>(0.000484078, 34.712);
  case 2145: return std::pair<double, double>(0.000472404, 34.6967);
  case 2150: return std::pair<double, double>(0.000460941, 34.9082);
  case 2155: return std::pair<double, double>(0.00044976, 35.0413);
  case 2160: return std::pair<double, double>(0.000438717, 35.1403);
  case 2165: return std::pair<double, double>(0.000427663, 35.2429);
  case 2170: return std::pair<double, double>(0.000417087, 35.2067);
  case 2175: return std::pair<double, double>(0.000406541, 35.4714);
  case 2180: return std::pair<double, double>(0.000396549, 35.5491);
  case 2185: return std::pair<double, double>(0.000387227, 35.7425);
  case 2190: return std::pair<double, double>(0.000377685, 35.6672);
  case 2195: return std::pair<double, double>(0.00036824, 35.9098);
  case 2200: return std::pair<double, double>(0.000359318, 35.9623);
  case 2205: return std::pair<double, double>(0.000350402, 36.0185);
  case 2210: return std::pair<double, double>(0.000342071, 36.245);
  case 2215: return std::pair<double, double>(0.000333108, 36.3203);
  case 2220: return std::pair<double, double>(0.000325306, 36.3282);
  case 2225: return std::pair<double, double>(0.000316997, 36.5413);
  case 2230: return std::pair<double, double>(0.000309731, 36.7432);
  case 2235: return std::pair<double, double>(0.000301864, 36.7687);
  case 2240: return std::pair<double, double>(0.000294675, 36.9412);
  case 2245: return std::pair<double, double>(0.000287398, 37.1824);
  case 2250: return std::pair<double, double>(0.00028065, 37.1485);
  case 2255: return std::pair<double, double>(0.000273425, 37.3577);
  case 2260: return std::pair<double, double>(0.000266633, 37.3399);
  case 2265: return std::pair<double, double>(0.000260448, 37.5246);
  case 2270: return std::pair<double, double>(0.000254453, 37.7047);
  case 2275: return std::pair<double, double>(0.000248358, 37.8684);
  case 2280: return std::pair<double, double>(0.00024216, 38.071);
  case 2285: return std::pair<double, double>(0.000235996, 38.26);
  case 2290: return std::pair<double, double>(0.000230291, 38.1896);
  case 2295: return std::pair<double, double>(0.000224084, 38.4083);
  case 2300: return std::pair<double, double>(0.000219049, 38.5249);
  case 2305: return std::pair<double, double>(0.000214032, 38.6523);
  case 2310: return std::pair<double, double>(0.000208248, 38.6168);
  case 2315: return std::pair<double, double>(0.000203199, 38.742);
  case 2320: return std::pair<double, double>(0.00019809, 38.9115);
  case 2325: return std::pair<double, double>(0.000193715, 39.2614);
  case 2330: return std::pair<double, double>(0.000189162, 39.1278);
  case 2335: return std::pair<double, double>(0.000184075, 39.3222);
  case 2340: return std::pair<double, double>(0.000180106, 39.3788);
  case 2345: return std::pair<double, double>(0.000175678, 39.8124);
  case 2350: return std::pair<double, double>(0.000171031, 39.6435);
  case 2355: return std::pair<double, double>(0.000167051, 39.707);
  case 2360: return std::pair<double, double>(0.000163052, 39.8228);
  case 2365: return std::pair<double, double>(0.000159079, 39.8948);
  case 2370: return std::pair<double, double>(0.000155058, 40.0085);
  case 2375: return std::pair<double, double>(0.000151091, 40.0903);
  case 2380: return std::pair<double, double>(0.000147865, 40.4762);
  case 2385: return std::pair<double, double>(0.000143836, 40.6052);
  case 2390: return std::pair<double, double>(0.00014101, 40.553);
  case 2395: return std::pair<double, double>(0.000137035, 40.6244);
  case 2400: return std::pair<double, double>(0.000133965, 40.7945);
  case 2405: return std::pair<double, double>(0.000130879, 40.9847);
  case 2410: return std::pair<double, double>(0.000127783, 41.1703);
  case 2415: return std::pair<double, double>(0.0001241, 40.9566);
  case 2420: return std::pair<double, double>(0.000121089, 41.0638);
  case 2425: return std::pair<double, double>(0.000118777, 41.508);
  case 2430: return std::pair<double, double>(0.000115804, 41.5799);
  case 2435: return std::pair<double, double>(0.00011285, 41.6479);
  case 2440: return std::pair<double, double>(0.000109965, 41.6973);
  case 2445: return std::pair<double, double>(0.000107077, 41.6702);
  case 2450: return std::pair<double, double>(0.000104886, 41.9997);
  case 2455: return std::pair<double, double>(0.000102035, 41.9184);
  case 2460: return std::pair<double, double>(9.97969e-05, 42.1891);
  case 2465: return std::pair<double, double>(9.73046e-05, 42.2923);
  case 2470: return std::pair<double, double>(9.50093e-05, 42.3683);
  case 2475: return std::pair<double, double>(9.26878e-05, 42.5345);
  case 2480: return std::pair<double, double>(9.04143e-05, 42.5981);
  case 2485: return std::pair<double, double>(8.82972e-05, 42.816);
  case 2490: return std::pair<double, double>(8.61566e-05, 42.8228);
  case 2495: return std::pair<double, double>(8.40135e-05, 42.9963);
  case 2500: return std::pair<double, double>(8.20068e-05, 43.1071);
  case 2505: return std::pair<double, double>(8.00048e-05, 43.2345);
  case 2510: return std::pair<double, double>(7.81237e-05, 43.3972);
  case 2515: return std::pair<double, double>(7.62249e-05, 43.4971);
  case 2520: return std::pair<double, double>(7.43669e-05, 43.522);
  case 2525: return std::pair<double, double>(7.25103e-05, 43.7345);
  case 2530: return std::pair<double, double>(7.08326e-05, 43.9086);
  case 2535: return std::pair<double, double>(6.91512e-05, 43.9687);
  case 2540: return std::pair<double, double>(6.74523e-05, 44.0719);
  case 2545: return std::pair<double, double>(6.57976e-05, 44.1696);
  case 2550: return std::pair<double, double>(6.42534e-05, 44.3683);
  case 2555: return std::pair<double, double>(6.26926e-05, 44.4751);
  case 2560: return std::pair<double, double>(6.11929e-05, 44.5956);
  case 2565: return std::pair<double, double>(5.96882e-05, 44.7074);
  case 2570: return std::pair<double, double>(5.82621e-05, 44.9635);
  case 2575: return std::pair<double, double>(5.67937e-05, 44.99);
  case 2580: return std::pair<double, double>(5.54544e-05, 45.1889);
  case 2585: return std::pair<double, double>(5.41303e-05, 45.2045);
  case 2590: return std::pair<double, double>(5.28013e-05, 45.3827);
  case 2595: return std::pair<double, double>(5.15257e-05, 45.5092);
  case 2600: return std::pair<double, double>(5.03066e-05, 45.6584);
  case 2605: return std::pair<double, double>(4.90915e-05, 45.8195);
  case 2610: return std::pair<double, double>(4.79282e-05, 45.9043);
  case 2615: return std::pair<double, double>(4.67741e-05, 46.1614);
  case 2620: return std::pair<double, double>(4.55954e-05, 46.1966);
  case 2625: return std::pair<double, double>(4.44978e-05, 46.3849);
  case 2630: return std::pair<double, double>(4.3506e-05, 46.4682);
  case 2635: return std::pair<double, double>(4.23826e-05, 46.6499);
  case 2640: return std::pair<double, double>(4.14053e-05, 46.7612);
  case 2645: return std::pair<double, double>(4.0404e-05, 46.8608);
  case 2650: return std::pair<double, double>(3.93955e-05, 46.9937);
  case 2655: return std::pair<double, double>(3.84871e-05, 47.2308);
  case 2660: return std::pair<double, double>(3.75902e-05, 47.3148);
  case 2665: return std::pair<double, double>(3.66599e-05, 47.5387);
  case 2670: return std::pair<double, double>(3.57884e-05, 47.6153);
  case 2675: return std::pair<double, double>(3.48943e-05, 47.7142);
  case 2680: return std::pair<double, double>(3.40897e-05, 47.9173);
  case 2685: return std::pair<double, double>(3.31887e-05, 48.0319);
  case 2690: return std::pair<double, double>(3.24111e-05, 48.0256);
  case 2695: return std::pair<double, double>(3.16719e-05, 48.4099);
  case 2700: return std::pair<double, double>(3.08937e-05, 48.4106);
  case 2705: return std::pair<double, double>(3.01877e-05, 48.5346);
  case 2710: return std::pair<double, double>(2.94115e-05, 48.6136);
  case 2715: return std::pair<double, double>(2.8704e-05, 48.7651);
  case 2720: return std::pair<double, double>(2.80001e-05, 48.9825);
  case 2725: return std::pair<double, double>(2.73257e-05, 48.9448);
  case 2730: return std::pair<double, double>(2.66994e-05, 49.2684);
  case 2735: return std::pair<double, double>(2.60266e-05, 49.2354);
  case 2740: return std::pair<double, double>(2.53885e-05, 49.5577);
  case 2745: return std::pair<double, double>(2.47946e-05, 49.7102);
  case 2750: return std::pair<double, double>(2.41975e-05, 49.786);
  case 2755: return std::pair<double, double>(2.36058e-05, 49.9522);
  case 2760: return std::pair<double, double>(2.30057e-05, 50.0547);
  case 2765: return std::pair<double, double>(2.24532e-05, 49.9341);
  case 2770: return std::pair<double, double>(2.19257e-05, 50.2056);
  case 2775: return std::pair<double, double>(2.14479e-05, 50.253);
  case 2780: return std::pair<double, double>(2.09194e-05, 50.5414);
  case 2785: return std::pair<double, double>(2.0365e-05, 50.4094);
  case 2790: return std::pair<double, double>(1.99069e-05, 50.9182);
  case 2795: return std::pair<double, double>(1.94274e-05, 50.9756);
  case 2800: return std::pair<double, double>(1.89382e-05, 50.9867);
  case 2805: return std::pair<double, double>(1.84485e-05, 50.9972);
  case 2810: return std::pair<double, double>(1.80387e-05, 51.2758);
  case 2815: return std::pair<double, double>(1.76254e-05, 51.4727);
  case 2820: return std::pair<double, double>(1.71424e-05, 51.5152);
  case 2825: return std::pair<double, double>(1.67221e-05, 51.7923);
  case 2830: return std::pair<double, double>(1.63365e-05, 51.7636);
  case 2835: return std::pair<double, double>(1.59378e-05, 51.9408);
  case 2840: return std::pair<double, double>(1.56117e-05, 52.2615);
  case 2845: return std::pair<double, double>(1.5223e-05, 52.3444);
  case 2850: return std::pair<double, double>(1.48268e-05, 52.4222);
  case 2855: return std::pair<double, double>(1.45152e-05, 52.7209);
  case 2860: return std::pair<double, double>(1.41249e-05, 52.7145);
  case 2865: return std::pair<double, double>(1.38168e-05, 52.9801);
  case 2870: return std::pair<double, double>(1.34323e-05, 52.9395);
  case 2875: return std::pair<double, double>(1.312e-05, 53.1604);
  case 2880: return std::pair<double, double>(1.2819e-05, 53.3483);
  case 2885: return std::pair<double, double>(1.25112e-05, 53.5412);
  case 2890: return std::pair<double, double>(1.22184e-05, 53.6652);
  case 2895: return std::pair<double, double>(1.19142e-05, 53.7994);
  case 2900: return std::pair<double, double>(1.16193e-05, 53.9263);
  case 2905: return std::pair<double, double>(1.13278e-05, 54.003);
  case 2910: return std::pair<double, double>(1.10278e-05, 54.0968);
  case 2915: return std::pair<double, double>(1.08166e-05, 54.4471);
  case 2920: return std::pair<double, double>(1.05223e-05, 54.46);
  case 2925: return std::pair<double, double>(1.0311e-05, 54.7996);
  case 2930: return std::pair<double, double>(1.00202e-05, 54.7577);
  case 2935: return std::pair<double, double>(9.78277e-06, 54.9155);
  case 2940: return std::pair<double, double>(9.54703e-06, 55.0446);
  case 2945: return std::pair<double, double>(9.31052e-06, 55.2299);
  case 2950: return std::pair<double, double>(9.08571e-06, 55.3383);
  case 2955: return std::pair<double, double>(8.86031e-06, 55.4494);
  case 2960: return std::pair<double, double>(8.64342e-06, 55.6635);
  case 2965: return std::pair<double, double>(8.42871e-06, 55.7493);
  case 2970: return std::pair<double, double>(8.2237e-06, 55.8355);
  case 2975: return std::pair<double, double>(8.02438e-06, 56.0202);
  case 2980: return std::pair<double, double>(7.82636e-06, 56.1602);
  case 2985: return std::pair<double, double>(7.63385e-06, 56.2893);
  case 2990: return std::pair<double, double>(7.44713e-06, 56.3994);
  case 2995: return std::pair<double, double>(7.26256e-06, 56.4786);
  case 3000: return std::pair<double, double>(7.08299e-06, 56.6394);
  default: return std::pair<double, double>(-9999,-9999);
  }
}