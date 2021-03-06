//A file to store common variables used throughout analysis
struct analysisCuts16q{
	
	//------------PID cuts-------------------//
	//MVA cuts
	const Float_t MVAcut_cent = 0.05;
	const Float_t MVAcut_fast = 0.1;

	//Standard Cuts
	//Common cuts between data sets
	const Float_t minEsigITS = -3;
	const Float_t maxEsigITS = 1;
	const Float_t minEsigTOF = -3;
	const Float_t maxEsigTOF = 3;
	//cent specific PID cuts
	const Float_t minEsigTPC_cent = -1.5;
	const Float_t maxEsigTPC_cent = 4;
	const Float_t minPsigTPC_cent = 3.5;
	//fast speicific PID cuts
	const Float_t minEsigTPC_fast = -3;
	const Float_t maxEsigTPC_fast = 3;
	const Float_t minPsigTPC_fast = 4;


	//--------- Track cuts --------------------//
	const Float_t minTPCcrossed = 100;
	const Float_t minTPCclusters = 80;
	const Float_t minTPCcrossFindable = 0.8;
	const Float_t maxTPCcrossFindable = 1.1;
	const Float_t maxFracTPCshared = 0.4;

	//ITS cuts are implented as less than cuts
	const Float_t minITShits_cent = 4;
	const Float_t minITShits_fast = 3;

	const Float_t maxITSchi2 = 4.5;
	const Float_t maxfITSshared = 0.01;

	const Float_t maxDCAz = 3;
	const Float_t maxDCAxy = 1;

	const Bool_t reqSPD = kTRUE;

	//--------- Pair cuts --------------------//
	const Float_t minPhiVmassCut = 0.100; //Exclude smaller than
	const Float_t maxPhiV = 2; //Exclude greater than

	const Int_t numEventsCent = 325290830;
	//Do not trust the fast number
	const Int_t numEventsFast = 415552587;
	
};

//Store variables for PID cut variation tests
//First loose, second analysis cut, third toight
struct variedPIDcuts16q{

	const Float_t MVAcut_cent[3] = {-0.10, 0.05, 0.20};
	const Float_t MVAcut_fast[3] = {-0.01, 0.10, 0.25};

};

//15 different cut settings for calcuation of track and ePID systematics
//Cuts implemented as strict > or < (NOT equal to)
//Cut set 5 are the analysis cuts
struct cutVariations16q{
	
	//                                  1,    2,   3,   4,     5,     6,    7,    8,    9,   10,   11,    12,  13,   14,   15
	Float_t MVAcut_cent[15]         = {0.05, 0.1, 0.0,  0.1,  0.05,  0.15,  0.0, 0.05, 0.05, -0.1, 0.15,  0.0, 0.0,  0.1,  0.05};
	Float_t MVAcut_fast[15]         = {0.10, 0.4, 0.2,  0.0,  0.10, -0.05, 0.05, 0.15, 0.20, -0.2, 0.0,   0.1, 0.2, -0.1,  0.0 };
	Float_t minTPCcrossed[15]       = { 100,  80, 100,   90,   110,   100,   80,  100,   80,  110,  90,   100,  80,  100,   80 };
	Float_t minTPCclusters[15]      = {  80,  70,  90,   80,   100,    80,   70,   90,   90,   90, 100,   100,  80,   80,  100 };
	Float_t minTPCcrossFindable[15] = { 0.8, 0.7, 0.6,  0.8,   0.8,   0.9,  0.6,  0.9,  0.6,  0.8, 0.7,   0.6, 0.8,  0.8,  0.5 };
	Float_t maxTPCcrossFindable[15] = { 1.1, 1.1, 1.1,  1.1,   1.1,   1.1,  1.1,  1.1,  1.1,  1.1, 1.1,   1.1, 1.1,  1.1,  1.1 };
	Float_t maxFracTPCshared[15]    = { 0.4, 0.2, 0.6,  0.5,   0.4,   0.3,  0.3,  0.4,  0.5,  0.4, 0.4,   0.6, 0.5,  0.4,  0.4 };
	Float_t minITShits_cent[15]     = {   2,   3,   4,    3,     2,     2,    2,    3,    3,    2,   4,     4,   2,    3,    2 };
	Float_t minITShits_fast[15]     = {   2,   3,   3,    2,     2,     3,    3,    3,    2,    2,   3,     2,   2,    2,    2 };
	Float_t maxITSchi2[15]          = { 4.5, 3.5, 3.5,  3.5,   4.5,     6,    7,  100,  4.5,  4.5, 3.5,     6, 4.5,    7,  3.5 };
	Float_t maxDCAxy[15]            = {   2, 1.5, 0.5,  0.5,     1,     2,    2,    2,  0.5,  1.5,   2,   0.5, 1.5,  1.5,  1.5 };
	Float_t maxDCAz[15]             = {   2,   3,   3,    4,     3,     2,    3,    3,    2,    2,   3,     3,   2,    2,    4 };
		
	//Standard Cuts
	//Common cuts between data sets
	const Float_t minEsigITS = -3;
	const Float_t maxEsigITS = 1;
	const Float_t minEsigTOF = -3;
	const Float_t maxEsigTOF = 3;
	//cent specific PID cuts
	const Float_t minEsigTPC_cent = -1.5;
	const Float_t maxEsigTPC_cent = 4;
	const Float_t minPsigTPC_cent = 3.5;
	//fast speicific PID cuts
	const Float_t minEsigTPC_fast = -3;
	const Float_t maxEsigTPC_fast = 3;
	const Float_t minPsigTPC_fast = 4;

	//Conversion cuts not varied for this study
	const Float_t maxfITSshared = 0.01;
	const Bool_t reqSPD = kTRUE;

	//--------- Pair cuts --------------------//
	const Float_t minPhiVmassCut = 0.100; //Exclude smaller than
	const Float_t maxPhiV = 2; //Exclude greater than
		
};
//------Varied track cuts for systematics
//PID cuts are held constant for these cut sets
//Define loose track cuts (for systematic study)
struct looseCuts16q{
		
	//------------PID cuts-------------------//
	//MVA cuts
	const Float_t MVAcut_cent = 0.05;
	const Float_t MVAcut_fast = 0.1;

	//Standard Cuts
	//Common cuts between data sets
	const Float_t minEsigITS = -3;
	const Float_t maxEsigITS = 1;
	const Float_t minEsigTOF = -3;
	const Float_t maxEsigTOF = 3;
	//cent specific PID cuts
	const Float_t minEsigTPC_cent = -1.5;
	const Float_t maxEsigTPC_cent = 4;
	const Float_t minPsigTPC_cent = 3.5;
	//fast speicific PID cuts
	const Float_t minEsigTPC_fast = -3;
	const Float_t maxEsigTPC_fast = 3;
	const Float_t minPsigTPC_fast = 4;

	//Track cuts
	const Float_t minTPCcrossed = 80;
	const Float_t minTPCclusters = 60;
	const Float_t minTPCcrossFindable = 0.6;
	const Float_t maxTPCcrossFindable = 1.1;
	const Float_t maxFracTPCshared = 1.0;

	//ITS cuts are implented as less than cuts
	const Float_t minITShits_cent = 3;
	const Float_t minITShits_fast = 2;

	const Float_t maxITSchi2 = 10;
	const Float_t maxfITSshared = 0.01;

	const Float_t maxDCAz = 4;
	const Float_t maxDCAxy = 2;

	const Bool_t reqSPD = kTRUE;

	//--------- Pair cuts --------------------//
	const Float_t minPhiVmassCut = 0.1; //Exclude smaller than
	const Float_t maxPhiV = 2; //Exclude greater than

};

//Define tight track cuts (for systematic study)
struct tightCuts16q{
		
	//------------PID cuts-------------------//
	//MVA cuts
	const Float_t MVAcut_cent = 0.05;
	const Float_t MVAcut_fast = 0.1;

	//Standard Cuts
	//Common cuts between data sets
	const Float_t minEsigITS = -3;
	const Float_t maxEsigITS = 1;
	const Float_t minEsigTOF = -3;
	const Float_t maxEsigTOF = 3;
	//cent specific PID cuts
	const Float_t minEsigTPC_cent = -1.5;
	const Float_t maxEsigTPC_cent = 4;
	const Float_t minPsigTPC_cent = 3.5;
	//fast speicific PID cuts
	const Float_t minEsigTPC_fast = -3;
	const Float_t maxEsigTPC_fast = 3;
	const Float_t minPsigTPC_fast = 4;

	//Track cuts
	const Float_t minTPCcrossed = 110;
	const Float_t minTPCclusters = 90;
	const Float_t minTPCcrossFindable = 0.9;
	const Float_t maxTPCcrossFindable = 1.1;
	const Float_t maxFracTPCshared = 0.2;

	//ITS cuts are implented as less than cuts
	const Float_t minITShits_cent = 5;
	const Float_t minITShits_fast = 3;

	const Float_t maxITSchi2 = 3.5;
	const Float_t maxfITSshared = 0.01;

	const Float_t maxDCAz = 2.;
	const Float_t maxDCAxy = 0.5;

	const Bool_t reqSPD = kTRUE;

	//--------- Pair cuts --------------------//
	const Float_t minPhiVmassCut = 0.1; //Exclude smaller than
	const Float_t maxPhiV = 2; //Exclude greater than

};
