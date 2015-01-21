class Terrain {
public:
	Terrain()
	{
	}

	void setVals(double a, double b, double c, double d, double e, double f, double g, double h, double i, double j, double k, double l, double m, double n) {
		terrain_fractal_type = a;
		terrain_fractal_basistype = b;
		terrain_fractal_interptype = c;
		terrain_fractal_octaves = d;
		terrain_fractal_frequency = e;
		terrain_fractal_seed = f;
		terrain_autocorrect_min = g;
		terrain_autocorrect_max = h;
		terrain_y_scale_scale = i;
		terrain_high_mount_select_threshold = j;
		terrain_high_mount_select_falloff = k;
		terrain_high_low_select_threshold = l;
		terrain_high_low_select_falloff = m;
		terrain_ground_select_threshold = n;
	}

	double getVals(int i) {
		double x[14];

		x[0] = terrain_fractal_type;
		x[1] = terrain_fractal_basistype;
		x[2] = terrain_fractal_interptype;
		x[3] = terrain_fractal_octaves;
		x[4] = terrain_fractal_frequency;
		x[5] = terrain_fractal_seed;
		x[6] = terrain_autocorrect_min;
		x[7] = terrain_autocorrect_max;
		x[8] = terrain_y_scale_scale;
		x[9] = terrain_high_mount_select_threshold;
		x[10] = terrain_high_mount_select_falloff;
		x[11] = terrain_high_low_select_threshold;
		x[12] = terrain_high_low_select_falloff;
		x[13] = terrain_ground_select_threshold;

		return x[i];
	}

	double get_terrain_fractal_type() {
		return terrain_fractal_type;
	}

	double get_terrain_fractal_basistype() {
		return terrain_fractal_basistype;
	}

	double get_terrain_fractal_interptype() {
		return terrain_fractal_interptype;
	}

	double get_terrain_fractal_octaves() {
		return terrain_fractal_octaves;
	}

	double get_terrain_fractal_frequency() {
		return terrain_fractal_frequency;
	}

	double get_terrain_fractal_seed() {
		return terrain_fractal_seed;
	}

	double get_terrain_autocorrect_min() {
		return terrain_autocorrect_min;
	}

	double get_terrain_autocorrect_max() {
		return terrain_autocorrect_max;
	}

	double get_terrain_y_scale_scale() {
		return terrain_y_scale_scale;
	}

	double get_terrain_high_mount_select_threshold() {
		return terrain_high_mount_select_threshold;
	}

	double get_terrain_high_mount_select_falloff() {
		return terrain_high_mount_select_falloff;
	}

	double get_terrain_high_low_select_threshold() {
		return terrain_high_low_select_threshold;
	}

	double get_terrain_high_low_select_falloff() {
		return terrain_high_low_select_falloff;
	}

	double get_terrain_ground_select_threshold() {
		return terrain_ground_select_threshold;
	}

private:
	double terrain_fractal_type;
	double terrain_fractal_basistype;
	double terrain_fractal_interptype;
	double terrain_fractal_octaves;
	double terrain_fractal_frequency;
	double terrain_fractal_seed;
	double terrain_autocorrect_min;
	double terrain_autocorrect_max;
	double terrain_y_scale_scale;
	double terrain_high_mount_select_threshold;
	double terrain_high_mount_select_falloff;
	double terrain_high_low_select_threshold;
	double terrain_high_low_select_falloff;
	double terrain_ground_select_threshold;
};