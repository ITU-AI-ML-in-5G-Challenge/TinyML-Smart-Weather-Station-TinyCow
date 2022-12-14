const float W0[5][5][5][1] = {
  {
    {{0.12148935},
     {0.069896445},
     {-0.2849995},
     {0.025274973},
     {0.13604406}},
    {{0.124029964},
     {0.41869992},
     {0.30588382},
     {0.30493248},
     {0.123944655}},
    {{0.3273303},
     {0.47061402},
     {0.14837421},
     {0.34885117},
     {-0.03589338}},
    {{-0.039776817},
     {0.06239184},
     {0.0051889922},
     {-0.03827533},
     {0.1759056}},
    {{0.011766368},
     {0.04212433},
     {-0.100284286},
     {0.10165126},
     {0.036916655}}
  },
  {
    {{0.20043574},
     {0.64929384},
     {0.11010344},
     {0.3463801},
     {0.15712135}},
    {{0.40486896},
     {0.6796898},
     {0.5865627},
     {0.4078275},
     {0.016053455}},
    {{-0.16788484},
     {0.56422824},
     {0.39755356},
     {0.5050824},
     {0.20097438}},
    {{0.11395054},
     {0.2814463},
     {0.27565217},
     {0.14324819},
     {-0.093174376}},
    {{-0.20119604},
     {0.53017634},
     {0.41048005},
     {0.3076286},
     {-0.057246912}}
  },
  {
    {{-0.31708148},
     {-0.079198934},
     {-0.12352272},
     {0.08268807},
     {0.057174087}},
    {{-0.20628397},
     {-0.22541995},
     {0.030296158},
     {-0.06608478},
     {0.11591031}},
    {{-0.37870228},
     {0.029085083},
     {-0.16140568},
     {-0.114240795},
     {0.20170982}},
    {{-0.3062414},
     {-0.37957036},
     {-0.2209896},
     {0.017088605},
     {-0.061845593}},
    {{-0.11063992},
     {-0.1806018},
     {-0.30651903},
     {-0.18252262},
     {-0.15508147}}
  },
  {
    {{1.4818525},
     {-0.3392966},
     {0.7885741},
     {0.10078665},
     {-0.03084693}},
    {{0.8230572},
     {0.34268078},
     {0.13909045},
     {0.33967397},
     {-0.07129807}},
    {{1.6980631},
     {0.5943389},
     {1.0374348},
     {0.6214585},
     {0.34815106}},
    {{1.485427},
     {0.3602374},
     {0.90882677},
     {0.2500808},
     {0.4969101}},
    {{1.2706879},
     {-0.12589726},
     {0.8521807},
     {0.26084834},
     {-0.28744406}}
  },
  {
    {{-0.3224858},
     {0.63911164},
     {0.37194353},
     {0.3685406},
     {0.3398192}},
    {{0.2614581},
     {0.52617025},
     {0.71067274},
     {0.19307506},
     {-0.054637026}},
    {{0.12197421},
     {0.32781276},
     {0.57376933},
     {0.152548},
     {0.043579783}},
    {{0.35857335},
     {0.5388351},
     {0.14987478},
     {0.33662397},
     {0.22880946}},
    {{0.073999666},
     {0.47631285},
     {0.24889643},
     {0.37133473},
     {0.11618196}}
  }
};
const float B0[5] = {
  0.023660028,-0.0039702225,0.009162666,-0.15945992,-0.004612648
};
const float W1[5][5][5][5] = {
  {
    {{-0.046026412,0.163451,-0.10915494,0.16283335,-0.20661093},
     {-0.15110357,0.05313044,0.10339171,-0.21053827,0.064003095},
     {-0.14644428,0.10472078,0.008983157,-0.21755655,-0.10823304},
     {-0.014829121,-0.16065007,0.032961346,-0.012384203,0.12527908},
     {0.06330042,0.016370466,0.044878416,-0.0645163,-0.16786136}},
    {{0.06783965,-0.35044634,-0.031292923,-0.24289846,-0.26910737},
     {0.008173258,-0.08682214,0.038486265,-0.17588769,-0.075542286},
     {-0.026115619,0.04437268,-0.031324223,0.05428085,0.14665437},
     {0.09059107,-0.02810162,0.049982022,-0.00530586,0.12459451},
     {0.0858779,-0.16824016,0.14375025,-0.20135155,-0.01413003}},
    {{-0.077638656,-0.117823586,-0.07311315,0.429542,-0.08596935},
     {-0.14637563,-0.21230985,0.16422075,-0.17049608,-0.12969548},
     {0.12109664,0.113012604,0.08574811,-0.052045897,0.22014347},
     {0.1284039,0.008768501,0.12941864,0.20287701,0.05759669},
     {-0.076780945,-0.14017074,-0.16838992,-0.03309271,-0.19102535}},
    {{0.19308855,0.09511724,0.060771186,0.32720453,0.026853465},
     {0.11663738,-0.12183893,0.06691216,-0.21375085,-0.080971174},
     {0.10070146,0.0049323393,-0.009982496,0.19087267,0.10705159},
     {0.19402556,-0.090105444,-0.1630186,0.13073507,-0.07044251},
     {0.13658783,-0.12659211,0.021169394,-0.10471337,0.06432215}},
    {{0.15830073,-0.057671852,0.07999029,0.3152931,0.10906645},
     {0.04267837,-0.19474024,0.13678604,-0.0972775,-0.0017274008},
     {0.02106482,0.17214629,0.010371533,0.17925246,0.040833123},
     {-0.046551596,-0.02525226,0.028733248,0.21224168,-0.0048006508},
     {-0.10534867,-0.08527598,0.11321956,-0.059561275,-0.1051345}}
  },
  {
    {{-0.011221843,0.32448262,-0.08182292,-0.42578888,0.024959331},
     {-0.058392584,0.10991006,0.081277415,0.069449075,-0.0503364},
     {0.14493376,0.21276262,-0.12004805,0.1234834,0.08928068},
     {0.165821,0.20924291,0.10962266,-0.06636944,-0.12502542},
     {-0.046263464,0.07533264,-0.031365633,0.06880979,0.19261703}},
    {{-0.11378089,0.1252292,0.055311494,-0.32110536,0.15070878},
     {-0.0863495,0.4702442,-0.1776855,-0.114560306,0.07310892},
     {-0.08914773,0.21409562,-0.073496334,-0.11178498,-0.00030500675},
     {-0.057150178,0.1280798,0.05928718,-0.12830457,0.08337486},
     {0.06446424,0.23050207,0.14329793,-0.061290994,0.17441238}},
    {{0.04666881,0.12914377,-0.13072369,-0.22999148,0.22795449},
     {0.12950234,0.36705664,0.048586603,-0.14831088,0.059643973},
     {0.06671934,0.1347169,0.0274053,-0.27318257,-0.020407982},
     {0.16705832,0.0035543337,-0.1371333,-0.21317604,-0.09676349},
     {-0.007449167,-0.08419181,-0.06842837,0.08146297,0.03472754}},
    {{-0.067506745,0.13712923,0.012107472,-0.33231065,-0.09732649},
     {-0.022054752,0.21361443,-0.11754314,-0.03518716,0.27981684},
     {-0.025883976,0.24091198,-0.020774847,-0.24173263,0.06699713},
     {0.17450799,0.017936679,0.07841338,-0.1358979,-0.09474548},
     {0.14563404,0.004933163,-0.16370288,0.040847607,0.16824183}},
    {{0.20804895,0.06421588,-0.1315568,-0.26169795,0.25418955},
     {-0.011111125,0.2811,-0.021023896,-0.21278372,0.016626151},
     {-0.009395607,0.16725142,0.115827955,-0.23142584,0.00050842547},
     {0.036588218,0.25916702,-0.20998137,-0.06534795,-0.0371674},
     {0.18699266,-0.07170497,0.090160534,-0.10450171,-0.057160016}}
  },
  {
    {{-0.10942884,0.23363031,0.080853514,-0.027540278,0.13634203},
     {0.068673745,-0.032741908,-0.14163329,-0.037813853,-0.0027148272},
     {0.057841577,0.045211896,0.005922032,-0.3195573,-0.08240567},
     {0.1464692,-0.10849746,-0.0031688316,-0.1412703,-0.002475186},
     {0.049058437,-0.03348529,-0.017751006,0.0009789984,-0.0015291882}},
    {{0.01147776,-0.018230217,0.018820586,0.11011437,0.0042011524},
     {0.029461537,0.01728557,-0.08969831,0.004524759,-0.12939723},
     {0.14253853,-0.03705281,0.12632015,-0.12907013,-0.08073011},
     {0.16004473,-0.1252331,0.08172198,-0.11467387,-0.052036718},
     {0.09659178,-0.06594398,0.050354164,-0.11669864,-0.077185065}},
    {{0.043065164,0.042458903,-0.12515694,0.13197945,0.029778892},
     {-0.03196935,0.16814683,-0.1460764,-0.109729476,0.10151718},
     {0.08349434,-0.12696816,0.10101186,-0.1723012,-0.07355974},
     {0.07701795,0.10301254,-0.031118559,-0.120201886,0.102754936},
     {-0.01020782,0.10047314,-0.15522283,-0.15029357,0.14368308}},
    {{0.105545186,-0.08082367,-0.06399125,0.12148843,0.16053069},
     {0.09512433,-0.117744796,0.1354021,-0.10518061,-0.16394849},
     {-0.000113916976,-0.12658553,-0.0007738749,-0.24583755,0.021459632},
     {0.12876157,-0.11530015,0.12993795,-0.2567369,-0.19499958},
     {0.009682941,0.07734873,-0.09227503,-0.0027462032,-0.030436374}},
    {{-0.021019159,0.03497048,0.060726885,-0.16542791,-0.028211365},
     {0.10245749,0.057329435,-0.122392565,-0.062484507,0.14653371},
     {-0.01621207,-0.008140749,-0.14667644,0.13051334,-0.05589312},
     {-0.07277638,0.045577683,0.043505095,-0.16758062,-0.025601795},
     {0.091143996,-0.05266474,0.12049967,-0.048264716,0.20524837}}
  },
  {
    {{0.11698471,0.43528235,-0.011069903,-0.3767868,0.04702798},
     {0.008606347,0.49910516,0.07523167,0.1512883,-0.03519857},
     {-0.120121926,0.08807679,-0.118614286,-0.23719239,0.051704016},
     {-0.037869975,0.27500877,-0.14506845,-0.08089046,0.00025886888},
     {0.10611408,0.28754947,0.015323335,-0.05468614,0.31053662}},
    {{-0.012816281,0.13284327,-0.16732185,-0.24539116,0.1058672},
     {0.009954144,0.43839794,-0.19191428,-0.20016646,0.23692131},
     {0.15622132,0.05411239,-0.10778945,-0.10781138,0.14921376},
     {0.1425516,0.32831484,-0.060570203,-0.3856767,0.014363813},
     {0.16032521,0.22302505,-0.073625736,-0.0090744635,0.33077}},
    {{-0.09670902,0.25318694,-0.1361656,-0.314376,0.2680877},
     {-0.11067067,0.18127881,-0.009256461,0.04850243,0.15908231},
     {0.14544192,0.17823651,0.13542263,-0.025223944,0.14153494},
     {-0.024624167,0.096683234,-0.050463352,-0.07902107,0.0171646},
     {-0.10022102,0.34009513,-0.17327267,-0.100116804,0.25067854}},
    {{0.09638286,0.06368266,0.16239107,-0.09423104,0.29684347},
     {-0.07969198,0.6027412,-0.12120174,-0.036595553,0.46210074},
     {-0.09880147,0.074114464,-0.13903514,-0.4268298,0.20259099},
     {0.0040186457,0.32148534,-0.12286984,-0.08502507,-0.072139405},
     {0.24034081,0.10762031,0.1534457,-0.18924741,0.30755585}},
    {{0.06771482,0.11964562,0.1403741,-0.3710165,0.30531272},
     {-0.0034454102,0.4219547,0.0076737218,0.10712988,0.16366927},
     {0.08181385,0.123135656,0.016840803,0.042789124,-0.066793635},
     {0.10261378,0.21437779,0.12511894,-0.2791593,-0.011754876},
     {0.19638757,0.045385044,-0.16117598,-0.0072330073,-0.020375125}}
  },
  {
    {{0.08937883,0.32437754,-0.005067755,0.07606568,0.1996309},
     {0.17660522,0.3259138,-0.010180376,0.16963424,0.18943043},
     {0.1795014,0.3392793,0.17705391,0.19097964,0.24600479},
     {0.03165417,-0.06895618,0.0008529639,-0.12913148,0.15169144},
     {-0.0018354828,0.084296525,0.12521277,0.16670674,-0.16997644}},
    {{0.0025003643,0.2190172,0.033285227,-0.2345062,0.30260816},
     {0.07445979,0.3388855,0.09413533,0.05571192,0.33877194},
     {-0.07695426,0.23429562,-0.17882593,0.05458071,0.1354566},
     {-0.10632972,0.093160346,0.19221225,0.13573341,-0.16770235},
     {0.100761496,0.08235564,-0.090223856,-0.15703762,-0.18850124}},
    {{0.2305055,0.10586791,-0.13743255,0.029515723,0.18699105},
     {0.11989888,0.30665165,-0.017743729,-0.122254886,0.21613432},
     {-0.05839014,0.10557844,-0.06893347,-0.08113977,0.0074106986},
     {0.101194635,-0.0118857995,-0.13442798,-0.12283746,-0.04767253},
     {-0.060101237,0.022008477,-0.057638988,-0.16838898,-0.057607245}},
    {{0.047602504,0.50520575,0.10758609,-0.038774583,0.31183338},
     {0.14538202,0.55956274,-0.16455267,-0.21265936,0.30136308},
     {-0.031832833,0.09989518,-0.15328646,0.0623989,0.21041071},
     {0.2049301,-0.10712853,-0.15483549,-0.03048811,-0.1693373},
     {0.020685777,-0.1196846,-0.02896886,0.0117212655,0.03478876}},
    {{0.26280278,0.35745308,0.022351388,-0.11829339,0.05721569},
     {0.059917774,0.3650235,-0.10759035,0.17743826,0.21392414},
     {-0.09734889,0.17469098,-0.018317156,0.12859032,0.10627641},
     {0.18807034,0.08602497,-0.03805055,-0.082050435,0.016021444},
     {-0.031465087,-0.025611937,-0.0679624,0.10875741,-0.23250002}}
  }
};
const float B1[5] = {
  0.05421661,-0.0426987,0.04371296,-0.013137968,-0.041434936
};
const float W2[5][1][62][5] = {
  {
    {{0.12096548,-0.13475503,0.023481177,-0.07479973,-0.07541133},
     {0.014464894,0.084985346,0.08212558,0.09926066,-0.021153089},
     {-0.23181552,0.1942433,0.044366892,0.07379095,-0.041403852},
     {-0.061822128,0.24002834,-0.17832445,0.078913026,0.060888343},
     {-0.122660324,0.0061222715,-0.06252872,-8.9759065e-05,0.13667092},
     {-0.03135865,-0.014057544,0.061535593,-0.10124846,-0.011320119},
     {-0.06513448,-0.14553672,-0.0002955443,-0.032867208,-0.238133},
     {0.055643607,0.08239216,0.01763386,0.00562862,-0.08338159},
     {0.008941909,0.051223934,0.11715712,0.072653614,-0.027691832},
     {0.00085811276,0.21018755,0.12897156,0.2602424,0.057756536},
     {-0.044637382,0.08666845,0.12127624,0.068816565,0.18438333},
     {0.09672206,0.00021858193,0.08277208,-0.20639522,-0.17786697},
     {0.06472615,-0.023646025,-0.025232248,-0.2101763,-0.14318542},
     {0.12786467,-0.12622628,0.084165335,-0.29484233,-0.21417306},
     {0.1117445,-0.0061361757,-0.023430943,-0.007763421,-0.12428654},
     {0.06197682,0.019759541,0.028247215,-0.03294262,-0.05313538},
     {0.05462263,0.03664293,-0.055156313,0.041366346,-0.02832801},
     {0.0751893,0.085363634,0.07549487,-0.03309826,0.021002954},
     {0.01091705,0.0059699276,-0.052849658,0.031666964,-0.12575923},
     {0.029891666,0.10044995,0.1216634,0.062655754,0.045351274},
     {0.0055339946,-0.10599352,0.057528313,-0.037415896,-0.14034712},
     {-0.031020146,-0.013822731,0.074471265,-0.055169616,-0.057075404},
     {-0.02001261,-0.060124513,0.10616698,0.108076155,-0.061968274},
     {-0.04362374,0.0008935662,0.116847165,-0.15476039,-0.09057371},
     {0.04462201,-0.26461244,0.13319795,-0.22461814,-0.20299982},
     {0.09337888,-0.09203817,-0.060638674,-0.20501292,-0.27967003},
     {0.082749195,-0.07413553,-0.05266471,-0.051016793,-0.035191882},
     {-0.049125932,0.016006364,-0.05640193,-0.022449333,0.035698842},
     {0.029953593,-0.106242664,0.013289682,-0.26890618,-0.13314974},
     {-0.049916085,-0.32857013,0.050081085,-0.2586928,-0.19963941},
     {0.120996356,-0.1570537,0.051185638,-0.13543001,-0.175318},
     {-0.069540694,0.003800843,0.11707182,0.04297963,-0.088029586},
     {0.081769414,0.19637899,0.061745234,0.23301706,0.32702348},
     {-0.057788786,0.056331445,0.08253965,0.07757094,0.1195471},
     {-0.046584908,-0.019493748,0.007440297,0.084212616,0.05223776},
     {0.100928225,0.111451805,-0.059826083,-0.005046304,0.032206126},
     {-0.05368812,-0.05644413,0.03434611,-0.09337706,-0.043160178},
     {0.04056438,0.03591503,0.10800648,-0.0170591,-0.1074058},
     {-0.0013939376,0.071040064,-0.07281754,0.06111221,-0.043190427},
     {0.0071394043,-0.111640766,0.12372772,-0.08277084,-0.023303756},
     {0.05850106,-0.17015204,-0.008068978,-0.07198508,-0.066350356},
     {0.00854144,-0.12713853,-0.034290683,-0.042077914,-0.12644635},
     {0.050264373,-0.028134277,0.1238688,0.047445778,0.03680515},
     {-0.028899925,-0.10458086,-0.024979295,-0.058819074,-0.10479562},
     {-0.018781478,-0.042092342,-0.036047257,-0.065580234,-0.014113375},
     {0.09361121,0.0870719,0.12084336,-0.008423031,0.06966329},
     {-0.00012016002,0.03848143,0.09769646,-0.037011664,-0.03152156},
     {0.06448697,0.040676855,0.0032021783,0.044760678,0.018109815},
     {0.026323881,0.12735617,-0.054548018,-0.024072433,0.045417927},
     {-0.023460755,0.020795604,-0.02125669,0.13494185,-0.03411793},
     {-0.0078060906,0.13700482,0.09065272,-0.021946631,-0.04988979},
     {0.073663704,0.039089866,-0.0041873897,-0.012351735,0.033205025},
     {0.068816006,-0.013623952,-0.06375791,-0.0010335218,0.061307188},
     {0.00550078,0.06021298,-0.047579024,0.09153508,-0.05020946},
     {0.09245789,-0.031406015,0.05087354,0.039307702,0.042199306},
     {0.005941761,0.07456368,0.017880077,0.13101593,0.04101004},
     {0.012415807,0.14251074,0.0652009,0.008955407,0.095302075},
     {-0.034223083,0.0016446135,-0.06819753,0.11325724,-0.004448395},
     {0.11686458,0.049635444,0.038542323,0.018099483,-0.03949997},
     {0.11819366,0.122308224,0.010949563,0.08632438,-0.030753734},
     {0.109908506,0.018989969,0.06726083,0.03870666,0.049718317},
     {0.07592538,0.087674335,0.090763666,0.0781702,0.00941158}}
  },
  {
    {{-0.1436423,0.24079499,0.026089706,0.040349506,-0.048356403},
     {0.062403824,-0.06410682,0.02212606,-0.02123452,-0.11784687},
     {0.29504538,-0.1425433,0.15305312,-0.14776231,-0.11678104},
     {0.247507,-0.11677253,0.29034495,-0.057635598,-0.20176119},
     {0.3182599,-0.052090652,0.07465871,-0.1307347,-0.158273},
     {-0.030860666,0.1343725,0.19413584,0.1634195,0.13689719},
     {0.06923203,0.103999056,-0.06342947,-0.021549346,0.115379654},
     {-0.060500007,0.043081746,0.03079112,-0.10855469,-0.0466122},
     {-0.0102967555,-0.047636185,-0.030202342,-0.18680109,-0.05407039},
     {-0.0010082485,-0.17873897,-0.032490946,-0.21473525,-0.10702005},
     {0.021060111,-0.04008271,0.0085496325,0.042374957,-0.23617873},
     {0.085373566,0.09057808,0.14997275,0.24229431,0.037338212},
     {0.12197198,0.13854113,0.08914035,0.16770282,0.14823484},
     {-0.043245878,-0.0005559838,-0.029403944,-0.000541325,-0.10246045},
     {-0.021911351,-0.058184993,0.014416745,-0.027674487,0.008068709},
     {0.16545236,-0.039971497,0.14088951,-0.07920033,-0.12590493},
     {0.07172543,-0.05294274,0.09761305,-0.16027194,-0.08752924},
     {0.068205856,0.022037435,0.043428987,-0.008236957,-0.0875116},
     {0.13490365,-0.0013977811,0.086439036,-0.24551135,0.014628667},
     {-0.01855703,-0.1208728,0.13866664,-0.03671646,-0.07233857},
     {-0.00036978527,0.031857062,0.0016385895,0.13082927,0.0657202},
     {0.015187734,0.05080297,-0.029938366,-0.059587084,0.09717995},
     {-0.042817313,-0.17225674,0.080444165,-0.1271376,-0.1948854},
     {0.045919072,0.012034759,-0.051740266,0.087744094,-0.18549564},
     {0.0037019246,0.04163664,0.023208316,0.11760034,0.025137769},
     {0.12291539,0.03704998,-0.025494466,0.12768906,0.0057033733},
     {-0.05635523,0.03878051,0.11608654,0.088524826,0.017544467},
     {0.12306358,0.14037922,-0.0046271733,0.037927955,0.17018351},
     {0.11100663,0.19490792,-0.026088752,0.21572937,0.12099839},
     {0.06956245,0.21262565,0.059443705,0.18180577,0.11061751},
     {0.100875355,-0.13595891,0.14208129,-0.12305303,0.0076150424},
     {0.05740358,-0.42488807,0.03914802,-0.556774,-0.19847466},
     {0.08331012,-0.52076167,0.029590173,-0.47204792,-0.672229},
     {-0.0026273308,-0.27992722,0.08197703,-0.25079483,-0.44018435},
     {-0.037888862,-0.11127882,0.00900275,-0.030805426,-0.12555785},
     {0.0038517276,-0.081192076,-0.039513234,-0.022197183,-0.20137836},
     {0.04141463,-0.073903844,0.12428706,0.011678122,-0.11445692},
     {0.13549706,-0.064971544,0.021300675,-0.015160982,0.046259236},
     {0.11222165,0.062544845,0.05591044,0.06254615,-0.10661424},
     {-0.0009052732,-0.054245096,0.12000733,0.09608383,0.01369338},
     {0.103142105,0.07430805,0.106682435,-0.10045166,0.04206212},
     {0.096726,-0.09654763,0.07292785,-0.008926411,0.002361004},
     {0.047455743,0.030965768,0.03919562,-0.024172092,-0.019404517},
     {-0.025411924,0.0396049,0.01871591,0.0028328162,0.0076143323},
     {0.02511109,0.05432201,-0.05013851,0.100325145,0.0021070915},
     {0.042944267,-0.063918486,-0.05224537,0.14747423,0.0333237},
     {0.10651227,0.02284639,-0.053690426,-0.054093346,-0.09314137},
     {0.02644029,-0.032439873,0.02363775,0.07746282,-0.06371281},
     {0.03984971,-0.066021614,0.033971664,0.004867125,-0.00035520951},
     {0.066418,0.0070105535,0.0825797,0.050700724,0.046798453},
     {0.054092553,0.02116692,-0.00043021375,0.123807624,-0.121642075},
     {-0.02205699,-0.017109318,0.04025853,0.012332178,-0.095580004},
     {0.03696266,0.023580436,0.065684125,0.02240082,-0.03773294},
     {0.019175563,0.08942019,0.027585085,0.034177486,0.006064014},
     {0.08598335,-0.047666695,0.0695647,-0.033622883,-0.0029604859},
     {-0.04551016,-0.031716622,0.11590082,0.045203142,0.039550483},
     {0.041609667,-0.08274467,0.048728414,-0.03148557,0.033142053},
     {0.03005552,-0.04750665,-0.02700022,0.11398879,0.06951893},
     {0.0102755735,-0.0030450295,0.052879766,-0.009867096,0.057421494},
     {0.10810069,0.09491639,0.076751605,-0.051618908,0.037122406},
     {0.07494876,0.094724685,0.12770134,0.04851631,-0.09753849},
     {-0.054466825,-0.049866125,0.07428941,0.08577312,0.015150243}}
  },
  {
    {{0.1327564,-0.09293767,0.010869992,-0.094544776,-0.07415113},
     {-0.025422119,0.1347084,0.009788918,0.07905941,-0.15271942},
     {-0.24786012,0.047830105,0.019216431,0.07704997,0.10125968},
     {-0.03911191,0.13390267,-0.23056181,0.1225826,0.16581829},
     {-0.21823871,0.0686732,-0.013932285,-0.04412186,0.14613622},
     {0.052795086,-0.058384355,-0.10260054,-0.021408716,-0.05858456},
     {0.05997156,-0.11472808,0.07458297,-0.12139804,-0.112668365},
     {-0.0043017752,-0.010248745,0.01793649,-0.006526039,-0.14070052},
     {0.04116123,0.0027838391,0.04787693,0.052680466,0.08367198},
     {0.082067,0.029535878,0.07172148,0.108252004,-0.10258461},
     {-0.08087594,0.1632767,0.0041900524,0.046610177,0.1036101},
     {-0.061835464,-0.09205363,0.07610788,-0.056174602,0.01479163},
     {0.097103275,-0.1927147,-0.016120365,-0.16983218,-0.15669608},
     {0.0011331267,-0.14480467,0.07800998,-0.12662062,-0.11938243},
     {0.02601604,-0.0040111067,0.0332292,0.11441394,-0.034538582},
     {0.076040454,0.04262253,0.009326469,0.1340175,0.08058263},
     {0.038626786,0.073056124,-0.032602303,0.15577184,0.11131213},
     {0.09712478,0.06307608,-0.036919285,0.09779812,-0.07803896},
     {0.06351112,0.05942056,0.030418573,-0.044785526,0.021088049},
     {0.021093702,-0.054732077,-0.0065062167,-0.08762165,0.029276993},
     {0.038747236,-0.027805183,0.08357164,-0.06174591,-0.050192606},
     {0.10095853,0.03859964,-0.032364126,-0.07612826,-0.006740595},
     {0.113396876,-0.08370745,0.09930597,-0.0750629,0.02992051},
     {0.09155222,-0.14355282,0.026748622,-0.034271576,-0.11514286},
     {0.005772278,-0.12212006,-0.027037336,-0.16022027,-0.14814316},
     {0.0012512177,-0.18268166,-0.007834627,-0.17720905,-0.15175472},
     {0.034006212,0.058288876,0.05939379,-0.048882574,-0.07783336},
     {-0.06247512,-0.017363964,-0.068347774,0.009236759,-0.07316399},
     {0.08395849,-0.018505067,0.09190095,-0.15611835,-0.07386881},
     {0.040715314,-0.1133837,0.09742285,-0.13948841,-0.12624866},
     {-0.07842431,0.021848612,0.049693365,-0.077965945,-0.1465788},
     {0.03461474,0.20556349,0.060748555,0.19498086,0.05519303},
     {-0.04017823,0.31248882,-0.083585605,0.4083542,0.340279},
     {-0.046820387,0.17527805,-0.051843625,0.20576297,0.17164078},
     {-0.06266216,0.03251643,0.07008446,0.10746443,0.17852055},
     {-0.039529543,0.109362945,-0.083255485,-0.046968944,0.0033472436},
     {0.069278754,0.04598153,0.04184355,-0.09081938,-0.026709955},
     {0.048728507,-0.026966432,0.071884245,0.005152688,-0.12660272},
     {0.05940608,-0.101969026,0.07608927,-0.030890917,-0.0064110034},
     {0.05914931,-0.10256827,-0.06326211,0.017893555,-0.026037892},
     {-0.05871915,0.013820358,-0.029911181,0.08943371,0.0683431},
     {0.026400153,-0.026967611,-0.08567505,-0.08477403,-0.01586129},
     {-0.008719598,-0.12654033,0.034344487,-0.0885101,-0.015283065},
     {0.098070756,-0.07027159,-0.032898866,0.022364795,-0.039761677},
     {-0.019952111,0.027921928,-0.0297708,-0.084671795,0.06717524},
     {0.10567249,-0.009935885,0.07739915,-0.047423884,-0.07305368},
     {-0.06599169,-0.059623253,-0.07790216,-0.1514543,-0.17551187},
     {0.044641055,0.04343968,0.1102646,0.016949106,-0.070909575},
     {-0.03311547,0.12895674,0.031389214,0.036182385,0.07905123},
     {0.033096563,-0.06180153,0.05590714,0.11783756,0.020203194},
     {-0.021901315,0.09259021,-0.029356627,0.0053002313,0.08274963},
     {0.052040733,-0.072130635,-0.026427537,-0.0546144,0.023315148},
     {0.064334124,-0.11810436,-0.04250386,-0.0045718467,-0.015298977},
     {0.028925821,0.008344341,0.055078257,-0.16863781,-0.012984387},
     {0.106355794,-0.019010575,0.022098659,-0.07923627,-0.021831643},
     {-0.06849193,0.004327206,-0.051250823,0.053190466,-0.06326903},
     {0.032152988,-0.043462444,-0.037369978,-0.060151774,-0.058767118},
     {0.035428334,0.0015624219,0.081813484,0.058256365,-0.13008432},
     {-0.04922185,-0.006049178,0.09691164,-0.00077641767,-0.018269315},
     {-0.017423363,-0.097634256,-0.070879176,-0.090463206,-0.079057574},
     {-0.058289293,0.01590911,-0.054426942,-0.06636024,-0.058408707},
     {0.012646302,-0.01961361,0.04446054,0.01931296,-0.12389076}}
  },
  {
    {{0.13117185,-0.17295974,0.19115186,-0.094182566,-0.11757895},
     {0.004105682,0.0406018,0.18288648,0.10267951,-0.020378666},
     {-0.16446348,0.17243502,-0.027781988,0.205268,-0.11794975},
     {0.08702937,0.06299614,-0.02453434,0.0008106372,0.09349744},
     {-0.11786952,-0.008194362,0.11139437,-0.120395154,-0.002071537},
     {-0.013937352,-0.109968215,0.11915822,-0.022839269,-0.04935683},
     {-0.03531161,-0.015230487,0.041558146,-0.025936412,-0.1631926},
     {-0.014674598,0.070080444,0.10699064,0.23633589,-0.074843585},
     {0.03757704,0.049316116,0.080174424,0.38772902,-0.06240427},
     {0.059914604,0.064203896,0.02704526,0.3591798,-0.104843535},
     {-0.024349678,-0.018683955,0.11775642,-0.049767874,0.037943117},
     {0.09962227,-0.19367623,0.13548091,-0.18950011,-0.18245949},
     {0.05934545,-0.059667237,0.057421386,-0.16671632,-0.23476537},
     {0.011873677,-0.07386681,0.085303746,-0.0945097,-0.022340234},
     {0.03472902,-0.15740007,0.09442538,-0.057818864,-0.07053218},
     {0.13431095,-0.1870978,0.08201456,-0.084646575,-0.24400096},
     {0.12461614,-0.09286402,0.018376067,0.025388584,-0.18545519},
     {0.003322736,-0.011357772,0.0522555,-0.050376527,-0.0620166},
     {0.04814624,-0.09257732,0.04001424,-0.016013091,-0.15662321},
     {-0.009511777,-0.073234454,0.06736075,-0.04708099,-0.026111666},
     {0.1011216,-0.12347911,0.13291207,-0.13766155,-0.12075369},
     {0.025567444,-0.106992014,0.0039579766,-0.041807637,-0.26140764},
     {0.10480201,0.09887671,-0.050993294,0.14670174,-0.09225638},
     {0.112782165,-0.008291164,-0.0041306047,-0.015180699,0.037841063},
     {0.0137691125,-0.22328715,-0.05893388,-0.2244426,-0.25904626},
     {-0.014218041,-0.045767624,0.0784614,-0.11835403,-0.12470098},
     {0.0599642,-0.15699507,0.012100487,-0.19181392,-0.14517654},
     {0.14039528,-0.20290911,0.07421699,-0.21160886,-0.11325046},
     {0.004254029,-0.3926376,0.06985618,-0.36634746,-0.31200925},
     {-0.03684584,-0.37206662,-0.017259026,-0.32482234,-0.36901942},
     {-0.020458238,-0.33235767,0.114040084,-0.22758539,-0.25244457},
     {0.04851151,-0.09685815,0.082181096,-0.0017468018,-0.1743643},
     {0.10472174,0.272372,0.048087806,0.2943174,0.16005135},
     {-0.021238692,0.14178744,0.011250311,0.22572955,0.17292647},
     {0.01904512,0.1333405,-0.0064975056,0.09916274,0.12516429},
     {-0.0076227626,-0.0016772386,0.020778332,0.12893708,0.10027466},
     {0.04541501,-0.04553739,0.017307032,0.053257205,-0.060182974},
     {0.062471084,0.029555563,0.004977561,0.02200404,0.10764222},
     {0.084611274,-0.0148538975,-0.05149065,-0.07879448,-0.02319527},
     {-0.043647524,-0.031316843,0.012194263,-0.036836978,0.026311379},
     {0.10311437,-0.044861116,0.07461107,-0.06450793,-0.05583598},
     {-0.058980104,0.025008917,-0.04033745,-0.014911938,0.029370563},
     {0.123877116,0.11871352,0.08100298,0.04183447,0.040609665},
     {0.06865806,0.05930334,-0.007039409,0.0906326,0.09321025},
     {0.0768288,0.010493419,0.037089344,0.061573774,0.012988067},
     {0.056463473,0.002259145,0.060536206,-0.003537413,0.08931725},
     {0.09869182,0.14116284,-0.023202486,0.05814327,-0.00899937},
     {-0.038974404,-0.059179243,0.02415001,0.123361915,-0.029635677},
     {-0.04100191,0.048251923,0.0033998978,0.062333528,-0.023665672},
     {-0.063470654,-0.031084433,0.0015836828,-0.009246677,-0.024797916},
     {-0.015461547,0.00016915785,-0.04708605,0.08028113,0.035135612},
     {0.08007434,-0.032311577,0.117699094,0.09551707,-0.0068205893},
     {0.026967185,0.014822863,-0.03887303,0.13438967,0.08676273},
     {0.12892126,-0.0014277439,0.11903998,0.06581617,0.0031791138},
     {0.078635134,-0.01955695,-0.057798844,0.00924602,0.0702434},
     {0.0854827,0.019090304,0.07578401,0.0111659,0.04632907},
     {-0.06395082,-0.06944712,-0.025244929,-0.028744418,-0.008374799},
     {-0.046226416,0.10290117,0.024233203,0.120719746,0.038020473},
     {0.11718355,0.08242956,-0.03412949,0.032212257,0.11314693},
     {-0.04668084,0.021576203,-0.056585215,0.03563308,0.06350634},
     {0.09936577,-0.02631831,0.04341005,0.029225636,0.008246902},
     {0.00092785666,0.13424596,0.112442546,0.1444111,0.09808379}}
  },
  {
    {{0.25869295,-0.16954944,0.05509588,-0.19658886,-0.017060677},
     {-0.024466587,0.024101786,0.13451022,-0.018340424,-0.13872725},
     {-0.0873044,0.14733118,0.02080524,0.24331404,-0.06740717},
     {-0.027215092,0.049964763,-0.18316534,0.029152988,0.036927488},
     {-0.1534873,0.14066139,0.033626255,-0.035815325,-0.035001125},
     {0.026281811,-0.06389448,0.084430546,-0.16297016,-0.16607262},
     {-0.029957656,-0.035629403,0.08137862,0.08829564,-0.11472306},
     {0.043332446,0.11868901,0.05541513,0.16202338,0.013816464},
     {0.06898699,0.0952852,0.08381984,0.21774651,-0.0461932},
     {0.08071568,0.21864206,-0.022936527,0.46587142,0.007820493},
     {-0.018796267,0.093106374,0.06290488,-0.030459968,0.23923418},
     {0.059139144,-0.12234016,0.061079647,-0.24954149,-0.116118185},
     {0.10848369,-0.0033342969,0.11490138,-0.06185881,-0.23899165},
     {0.04664962,-0.13084568,-0.008932095,-0.19940409,-0.14709643},
     {-0.025606588,-0.18223993,0.050104033,-0.17076793,-0.20982975},
     {-0.027121931,-0.08467605,0.019071158,0.018011069,-0.15414345},
     {-0.034652334,0.0122541925,0.07960111,0.043805256,-0.19380955},
     {-0.003364871,0.13885449,0.112870455,0.15584306,0.14944251},
     {0.09631251,0.14287081,0.102551065,0.17688508,-0.028298844},
     {0.14789473,0.15001838,-0.040354483,0.125347,0.01188686},
     {0.15209426,-0.22815102,-0.01760166,-0.17565921,0.04023386},
     {-0.0073623247,-0.21292813,0.057987727,-0.052160356,-0.19556108},
     {0.08787414,-0.019447671,0.12370297,0.034819316,-0.011503775},
     {0.052784253,0.05016089,-0.015031029,-0.120386206,0.1366909},
     {-0.013093527,-0.16451143,0.103985734,-0.3504806,-0.27148882},
     {-0.032544933,-0.20955423,0.13797924,-0.350966,-0.3288562},
     {0.14399134,-0.15515381,0.10341532,-0.27168736,-0.1629379},
     {-0.013485756,-0.25162426,0.013444821,-0.31392732,-0.112013936},
     {-0.018835312,-0.4589414,0.12737377,-0.49716735,-0.32535112},
     {0.07167076,-0.48446044,-0.05029767,-0.56886256,-0.28849512},
     {0.07709037,-0.38943762,0.12156952,-0.37869367,-0.40656447},
     {0.086267725,0.0074189403,0.05193594,0.084863804,-0.3478694},
     {-0.02209951,0.33899474,-0.02900674,0.37121534,0.40512142},
     {0.028322091,0.3388722,0.120771684,0.20783691,0.35150436},
     {-0.015109936,0.124902934,0.072105885,0.07151701,0.10210663},
     {0.0940271,0.03327049,-0.038075004,-0.021594215,0.0011304627},
     {0.01328843,0.07897201,-0.009327402,-0.013293274,0.07263218},
     {-0.012159198,0.0073706275,-0.014719326,0.14288548,-0.032972865},
     {0.059915036,0.013339054,-0.04845374,-0.114738025,0.07096689},
     {0.112542905,-0.13867784,0.042126406,-0.00033289765,-0.08198594},
     {0.12544739,-0.120639056,0.06843318,-0.19381711,-0.094477355},
     {0.0481533,-0.041305173,-0.06157051,-0.06115224,0.073258124},
     {0.04922446,-0.038439907,0.12995076,-0.012622103,0.07437552},
     {0.027710736,0.016724156,0.06192315,0.11723244,0.007239378},
     {0.081955165,-0.040022243,0.01023148,-0.03236932,-0.0065956106},
     {0.08948637,0.029384237,-0.06036349,0.06229837,0.053317484},
     {-0.0085564,0.16892846,0.001489617,0.039799612,3.781836e-05},
     {-0.036471035,0.12911417,-0.027337262,-0.01806439,0.038245656},
     {0.12717687,0.11912426,-0.042387277,0.050101943,0.11840865},
     {0.12334672,0.007844451,0.108914785,-0.040348254,0.005876911},
     {0.09398575,0.016591199,-0.046250213,0.07565542,0.1222466},
     {0.05921252,0.10677678,0.09618833,0.0866112,0.16143478},
     {0.04596946,0.12410513,0.07440238,-0.06485414,0.017998055},
     {0.09490445,-0.0107298745,0.002615551,0.077751674,0.06579565},
     {0.039822355,0.02788725,0.097109914,0.069193244,0.053454358},
     {-0.037668187,0.012637523,-0.052536447,0.031362314,0.063002475},
     {-0.0023153746,0.004212141,-0.027563548,0.13580507,-0.010927849},
     {0.06823249,0.049926925,0.102125816,0.14718363,-0.013654097},
     {0.02868165,0.008347053,0.039367586,0.022447659,0.009364803},
     {-0.055305857,-0.035338238,0.014036582,0.050080497,0.11356917},
     {0.019269235,0.10411661,0.06629114,0.01216281,0.03273779},
     {-0.009784449,-0.034393147,0.11330222,-0.03747029,-0.026505323}}
  }
};
const float B2[5] = {
  0.043775044,0.031147912,0.021897802,0.048562787,0.055323616
};
const float W3[8][9][1][5] = {
  {
    {{0.24736711,-0.28621385,0.2070595,0.27193704,-0.003416647}},
    {{0.19725522,0.06201729,0.29419383,-0.12564193,0.12741326}},
    {{-0.097148426,-0.102276206,-0.0962787,-0.06639035,0.04387491}},
    {{-0.011369241,-0.06742372,-0.0734386,0.25503418,0.20163427}},
    {{0.19839846,-0.19437757,-0.035321984,0.22489099,0.15979524}},
    {{0.109898224,-0.20794088,-0.08311456,0.18118714,0.31080207}},
    {{0.2048842,-0.25216356,0.22789617,0.007551415,-0.05486958}},
    {{-0.14984812,-0.32262632,-0.015029348,0.03261021,0.18657681}},
    {{-0.07028064,-0.20362242,-0.119342364,0.050666075,-0.034042954}}
  },
  {
    {{0.19760668,0.15324993,-0.17756006,-0.16818045,0.06517778}},
    {{-0.14411168,0.20617382,0.046244036,-0.07749547,0.05854277}},
    {{-0.12034551,0.20613596,0.13881676,0.11705315,-0.16556403}},
    {{0.03970161,0.1976474,0.09744509,-0.18978937,-0.15655775}},
    {{0.04220259,-0.13642077,0.008969275,-0.20789072,-0.07776339}},
    {{-0.078164786,-0.016038725,0.18204002,-0.046335112,-0.15728082}},
    {{-0.07622407,-0.08116711,-0.021711696,-0.0008618908,-0.13846064}},
    {{0.17827193,0.27877283,-0.08676373,0.13265978,0.109228864}},
    {{-0.07743158,0.38902083,-0.0845688,0.19510695,0.12499687}}
  },
  {
    {{0.2233447,-0.33025727,0.10404567,0.28543314,0.24553354}},
    {{-0.08457233,-0.23157144,0.11563701,-0.10767094,0.091673076}},
    {{0.20852019,-0.29929832,-0.0134943025,0.21375568,0.19650953}},
    {{0.076818414,-0.19204724,-0.14408939,-0.036827516,0.2138854}},
    {{0.02607366,-0.29188457,0.2094552,0.17568737,0.006352139}},
    {{0.14384915,-0.006829192,-0.098035984,-0.030504914,0.07888967}},
    {{-0.16665004,-0.35935676,0.21026218,0.25715294,0.094528615}},
    {{0.1821609,-0.09737472,0.048119966,0.042537376,0.09511679}},
    {{-0.19053409,0.007201764,0.15626672,-0.014045826,0.24285264}}
  },
  {
    {{0.1504014,-0.11965967,0.13734399,0.20924777,-0.06501622}},
    {{-0.04410282,-0.36969212,0.21212557,0.22591862,-0.03732871}},
    {{0.2084311,-0.39942142,0.018517984,-0.15601438,0.20590787}},
    {{-0.17957833,-0.13751374,0.001016401,0.07137574,0.28831723}},
    {{-0.20017965,-0.25863189,0.14860025,0.0815717,0.12084996}},
    {{0.041940358,0.030781645,0.18061386,0.07441114,0.17620271}},
    {{0.2084714,-0.40055323,-0.036604315,0.086366996,0.13102591}},
    {{0.15482497,0.00021491692,0.22723885,0.263758,0.1321099}},
    {{0.20374192,-0.40471599,-0.068809524,0.25133315,0.06606779}}
  },
  {
    {{0.1534035,-0.008521954,0.03934694,0.305438,-0.012393012}},
    {{-0.15532202,-0.12715717,-0.13777187,0.114165165,0.16658276}},
    {{-0.10977212,-0.323629,0.25909752,0.19719912,-0.123076014}},
    {{-0.044393048,-0.19128224,0.08143916,0.015945315,0.030649642}},
    {{0.12218873,-0.020782256,-0.03632284,0.19766769,0.22523785}},
    {{-0.054067586,-0.42052928,0.070775405,0.20008445,-0.011908719}},
    {{-0.009331443,-0.1378448,0.053197708,0.15420644,0.23308104}},
    {{0.023173729,-0.31796762,0.025685214,0.24813966,0.06576041}},
    {{0.13535053,-0.025980838,0.045589156,-0.03462091,0.12265662}}
  },
  {
    {{-0.009968348,0.13532273,-0.13078073,-0.27006453,-0.33632508}},
    {{0.22814588,-0.85291064,0.26996934,0.011728139,0.17592366}},
    {{-0.08092201,-0.08969897,0.10902383,-0.065436475,-0.10807109}},
    {{0.19038336,0.3132598,0.12048428,-0.1414321,-0.20442376}},
    {{-0.049291138,0.38245368,-0.2910503,0.06558418,0.020394037}},
    {{-0.040067207,0.13029395,0.020313542,-0.04344382,0.13508125}},
    {{-0.14718561,0.22418286,-0.18541302,-0.016609598,0.03744666}},
    {{-0.0005960106,-0.11843716,0.019438615,0.13036612,0.19467783}},
    {{-0.089837715,0.01382298,0.05778429,0.2900107,0.14458297}}
  },
  {
    {{-0.027605288,0.19520089,0.039113946,-0.29805326,-0.13110498}},
    {{-0.0053173113,0.18204443,-0.03928818,-0.15933265,-0.11024555}},
    {{0.026249992,0.24443646,0.06477056,-0.024924854,-0.24028313}},
    {{0.21073928,-0.12718558,0.22935383,-0.18466209,-0.1865185}},
    {{0.33375356,0.016866853,0.04838939,-0.22834581,-0.18969326}},
    {{0.349461,0.019626724,0.048156004,-0.1196811,-0.29649767}},
    {{0.14873041,0.061196405,0.1896259,-0.22530831,-0.24237902}},
    {{0.26718855,0.19650403,0.12334584,-0.16263558,-0.21259192}},
    {{-0.020726735,0.2115169,0.06794898,0.0658548,-0.024870507}}
  },
  {
    {{0.11852954,-0.46741357,0.21712272,0.28052026,0.2662113}},
    {{-0.06701968,-0.5911023,0.12794375,-0.012021883,0.21469682}},
    {{0.0026175494,-0.44644472,-0.09093502,-0.10434837,0.07540087}},
    {{-0.014331591,-0.5163459,0.104031354,0.24664079,0.33727473}},
    {{-0.13232622,-0.5220456,0.09401501,0.17149904,0.2588034}},
    {{0.20382598,-0.42977765,0.10634715,0.07043917,0.34177706}},
    {{0.23251502,-0.50299394,-0.122053824,-0.026452959,0.082937896}},
    {{0.14948124,-0.30466026,0.02631639,0.08099854,-0.0071164966}},
    {{-0.12949902,-0.6049533,0.06460606,-0.037685156,0.108844146}}
  }
};
const float B3[8] = {
  0.011384785,-0.054288138,0.008432103,0.004535554,0.008889132,-0.052868873,0.042876527,0.00016439872
};
const float W4[1][9][1][8] = {
  {
    {{0.079821594,-0.2822454,0.310295,0.27915183,0.35049126,-0.16152349,-0.2548778,0.4456643}},
    {{0.36049002,-0.1105748,0.19789134,0.21639404,0.29988936,-0.55383056,-0.27103263,0.13065961}},
    {{0.102260605,-0.13017203,0.11658152,-0.041144777,0.03254011,0.21869598,-0.2098437,0.28344956}},
    {{0.009271299,-0.30753508,0.22779755,0.20341071,0.30262902,-0.16197264,-0.113987505,0.5234679}},
    {{0.034513675,0.061385784,0.056862235,0.073775254,-0.0941482,-0.1622916,-0.31005067,0.084738806}},
    {{0.1499195,-0.24953903,0.091843806,0.042102,-0.012282238,0.22931623,-0.299659,0.459259}},
    {{0.08746988,-0.18360704,0.16529427,-0.019226003,0.03514663,-0.40310305,-0.13996166,0.62867016}},
    {{0.37626335,-0.11025371,0.26576543,0.14562854,0.092611395,-0.03577763,-0.3364664,0.5103242}},
    {{0.31506062,-0.08985985,-0.09518519,0.19002675,0.29892573,-0.3214032,-0.05735341,0.18276604}}
  }
};
const float B4[1] = {
  0.054891933
};
