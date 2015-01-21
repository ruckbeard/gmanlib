#include "Lowlands.h"
#include "Highlands.h"
#include "Mountains.h"
#include "Terrain.h"
#include "CaveShape.h"
#include "CavePreturb.h"
#include "accidental_noise.cpp"
#include <windows.h>
#include <string>
#include <vector>
#define GMEXPORT extern "C" __declspec (dllexport)
#define ANLIBIMPORT __declspec (dllimport) map_file

using std::string;
std::vector<Lowlands *> LowlandClasses;
std::vector<unsigned int> LowlandOpenSpots;
std::vector<Highlands *> HighlandClasses;
std::vector<unsigned int> HighlandOpenSpots;
std::vector<Mountains *> MountainClasses;
std::vector<unsigned int> MountainOpenSpots;
std::vector<Terrain *> TerrainClasses;
std::vector<unsigned int> TerrainOpenSpots;
std::vector<CaveShape *> CaveShapeClasses;
std::vector<unsigned int> CaveShapeOpenSpots;
std::vector<CavePreturb *> CavePreturbClasses;
std::vector<unsigned int> CavePreturbOpenSpots;

double map1[10000][10000];

BOOL WINAPI DllMain(HINSTANCE hInst	 /* Library instance handle.*/,
	DWORD reason		/* Reason this function is being called.*/ ,
	LPVOID reserved	 /* Not used.*/ )
{
	switch (reason)
	{
	case DLL_PROCESS_ATTACH:
		break;

	case DLL_PROCESS_DETACH:
		break;

	case DLL_THREAD_ATTACH:
		break;

	case DLL_THREAD_DETACH:
		break;
	}

	/* Returns TRUE on success, FALSE on failure */
	return TRUE;
}

GMEXPORT double InitLowlandClass() {
	int ind;
	if (LowlandOpenSpots.empty()) {
		ind = LowlandClasses.size();
		LowlandClasses.push_back(new Lowlands());
	}
	else {
		ind = LowlandOpenSpots.back();
		LowlandOpenSpots.pop_back();
		LowlandClasses[ind] = new Lowlands();
	}
	return ind;
}

GMEXPORT double DeleteLowlandClass(double i) {
	unsigned int ind = unsigned int(i);
	if (LowlandClasses.size() > ind && LowlandClasses[ind] != NULL) { //safety measure
		delete LowlandClasses[ind];
		LowlandClasses[ind] = NULL; //safety measure
		LowlandOpenSpots.push_back(ind);
	}
	return 0;
}

GMEXPORT double SetLowlandValues(double _i, double a, double b, double c, double d, double e, double f, double g, double h, double i, double j, double k) {
	unsigned int ind = unsigned int(_i);
	if (LowlandClasses.size() > ind && LowlandClasses[ind] != NULL) { //safety measure
		LowlandClasses[ind]->setVals(a, b, c, d, e, f, g, h, i, j, k);
	}
	return 0;
}

GMEXPORT double GetLowlandValues(double i, double j) {
	unsigned int ind = unsigned int(i);
	if (LowlandClasses.size() > ind && LowlandClasses[ind] != NULL) {
		return LowlandClasses[ind]->getVals(j);
	}
	return 0;
}

GMEXPORT double InitHighlandClass() {
	int ind;
	if (HighlandOpenSpots.empty()) {
		ind = HighlandClasses.size();
		HighlandClasses.push_back(new Highlands());
	}
	else {
		ind = HighlandOpenSpots.back();
		HighlandOpenSpots.pop_back();
		HighlandClasses[ind] = new Highlands();
	}
	return ind;
}

GMEXPORT double DeleteHighlandClass(double i) {
	unsigned int ind = unsigned int(i);
	if (HighlandClasses.size() > ind && HighlandClasses[ind] != NULL) { //safety measure
		delete HighlandClasses[ind];
		HighlandClasses[ind] = NULL; //safety measure
		HighlandOpenSpots.push_back(ind);
	}
	return 0;
}

GMEXPORT double SetHighlandValues(double _i, double a, double b, double c, double d, double e, double f, double g, double h, double i, double j, double k) {
	unsigned int ind = unsigned int(_i);
	if (HighlandClasses.size() > ind && HighlandClasses[ind] != NULL) { //safety measure
		HighlandClasses[ind]->setVals(a, b, c, d, e, f, g, h, i, j, k);
	}
	return 0;
}

GMEXPORT double InitMountainClass() {
	int ind;
	if (MountainOpenSpots.empty()) {
		ind = MountainClasses.size();
		MountainClasses.push_back(new Mountains());
	}
	else {
		ind = MountainOpenSpots.back();
		MountainOpenSpots.pop_back();
		MountainClasses[ind] = new Mountains();
	}
	return ind;
}

GMEXPORT double DeleteMountainClass(double i) {
	unsigned int ind = unsigned int(i);
	if (MountainClasses.size() > ind && MountainClasses[ind] != NULL) { //safety measure
		delete MountainClasses[ind];
		MountainClasses[ind] = NULL; //safety measure
		MountainOpenSpots.push_back(ind);
	}
	return 0;
}

GMEXPORT double SetMountainValues(double _i, double a, double b, double c, double d, double e, double f, double g, double h, double i, double j, double k) {
	unsigned int ind = unsigned int(_i);
	if (MountainClasses.size() > ind && MountainClasses[ind] != NULL) { //safety measure
		MountainClasses[ind]->setVals(a, b, c, d, e, f, g, h, i, j, k);
	}
	return 0;
}

GMEXPORT double InitTerrainClass() {
	int ind;
	if (TerrainOpenSpots.empty()) {
		ind = TerrainClasses.size();
		TerrainClasses.push_back(new Terrain());
	}
	else {
		ind = TerrainOpenSpots.back();
		TerrainOpenSpots.pop_back();
		TerrainClasses[ind] = new Terrain();
	}
	return ind;
}

GMEXPORT double DeleteTerrainClass(double i) {
	unsigned int ind = unsigned int(i);
	if (TerrainClasses.size() > ind && TerrainClasses[ind] != NULL) { //safety measure
		delete TerrainClasses[ind];
		TerrainClasses[ind] = NULL; //safety measure
		TerrainOpenSpots.push_back(ind);
	}
	return 0;
}

GMEXPORT double SetTerrainValues(double _i, double a, double b, double c, double d, double e, double f, double g, double h, double i, double j, double k, double l, double m, double n) {
	unsigned int ind = unsigned int(_i);
	if (TerrainClasses.size() > ind && TerrainClasses[ind] != NULL) { //safety measure
		TerrainClasses[ind]->setVals(a, b, c, d, e, f, g, h, i, j, k, l, m, n);
	}
	return 0;
}

GMEXPORT double InitCaveShapeClass() {
	int ind;
	if (CaveShapeOpenSpots.empty()) {
		ind = CaveShapeClasses.size();
		CaveShapeClasses.push_back(new CaveShape());
	}
	else {
		ind = CaveShapeOpenSpots.back();
		CaveShapeOpenSpots.pop_back();
		CaveShapeClasses[ind] = new CaveShape();
	}
	return ind;
}

GMEXPORT double DeleteCaveShapeClass(double i) {
	unsigned int ind = unsigned int(i);
	if (CaveShapeClasses.size() > ind && CaveShapeClasses[ind] != NULL) { //safety measure
		delete CaveShapeClasses[ind];
		CaveShapeClasses[ind] = NULL; //safety measure
		CaveShapeOpenSpots.push_back(ind);
	}
	return 0;
}

GMEXPORT double SetCaveShapeValues(double _i, double a, double b, double c, double d, double e, double f, double g, double h) {
	unsigned int ind = unsigned int(_i);
	if (CaveShapeClasses.size() > ind && CaveShapeClasses[ind] != NULL) { //safety measure
		CaveShapeClasses[ind]->setVals(a, b, c, d, e, f, g, h);
	}
	return 0;
}

GMEXPORT double InitCavePreturbClass() {
	int ind;
	if (CavePreturbOpenSpots.empty()) {
		ind = CavePreturbClasses.size();
		CavePreturbClasses.push_back(new CavePreturb());
	}
	else {
		ind = CavePreturbOpenSpots.back();
		CavePreturbOpenSpots.pop_back();
		CavePreturbClasses[ind] = new CavePreturb();
	}
	return ind;
}

GMEXPORT double DeleteCavePreturbClass(double i) {
	unsigned int ind = unsigned int(i);
	if (CavePreturbClasses.size() > ind && CavePreturbClasses[ind] != NULL) { //safety measure
		delete CavePreturbClasses[ind];
		CavePreturbClasses[ind] = NULL; //safety measure
		CavePreturbOpenSpots.push_back(ind);
	}
	return 0;
}

GMEXPORT double SetCavePreturbValues(double _i, double a, double b, double c, double d, double e, double f, double g, double h, double i, double j, double k, double l) {
	unsigned int ind = unsigned int(_i);
	if (CavePreturbClasses.size() > ind && CavePreturbClasses[ind] != NULL) { //safety measure
		CavePreturbClasses[ind]->setVals(a, b, c, d, e, f, g, h, i, j, k, l);
	}
	return 0;
}

GMEXPORT double set_map(double a, double b, double c, double d, double e, double f, double g, double h, double j) {
	/*double lowland_vars[11];
	double highland_vars[11];
	double mountain_vars[11];
	double terrain_vars[14];
	double caveshape_vars[8];
	double cavepreturb_vars[12];

	for (int i = 0; i < 10; i++){
		lowland_vars[i] = LowlandClasses[a]->getVals(i);
	}

	for (int i = 0; i < 10; i++){
		highland_vars[i] = HighlandClasses[b]->getVals(i);
	}

	for (int i = 0; i < 10; i++){
		mountain_vars[i] = MountainClasses[c]->getVals(i);
	}

	for (int i = 0; i < 13; i++){
		terrain_vars[i] = TerrainClasses[a]->getVals(i);
	}

	for (int i = 0; i < 7; i++){
		caveshape_vars[i] = CaveShapeClasses[a]->getVals(i);
	}

	for (int i = 0; i < 11; i++){
		cavepreturb_vars[i] = CavePreturbClasses[a]->getVals(i);
	}*/

	 return map_file();
}

GMEXPORT double test(double a, double b, double c, double d) {
	return map_test(a,b);
}

GMEXPORT double test2() {
	return map_test2();
}


GMEXPORT double get_map(double x, double y) {
	int _x = int(x);
	int _y = int(y);

	double val = return_map(_x, _y);

	return val;
}