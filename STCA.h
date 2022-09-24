#pragma once
#include <EuroScopePlugIn.h>
#include <string>
#include <vector>
#include <algorithm>
#include "Constants.h"
#include "toml.hpp"

using namespace std;
using namespace EuroScopePlugIn;


class CSTCA
{
public:
	CSTCA(toml::value CurrentConfig);
	virtual ~CSTCA();

	vector<string> Alerts;

	int high_level_sep = 5;
	int low_level_sep = 3;
	int disable_level = 3000;
	int level_reduced_sep = 14500;
	int time_to_extrapolate = 120;
	int altitude_sep = 950;
	int altitude_coarse_filter = 15000;
	int distance_coarse_filter = 70;

	void OnRefresh(CPlugIn* pl);
	bool IsSTCA(string cs);
};