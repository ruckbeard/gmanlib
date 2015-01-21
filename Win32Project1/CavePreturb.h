class CavePreturb {
public:
	CavePreturb()
	{
	}

	void setVals(double a, double b, double c, double d, double e, double f, double g, double h, double i, double j, double k, double l) {
		cavepreturb_fractal_type = a;
		cavepreturb_fractal_basistype = b;
		cavepreturb_fractal_interptype = c;
		cavepreturb_fractal_octaves = d;
		cavepreturb_fractal_frequency = e;
		cavepreturb_fractal_seed = f;
		cavepreturb_scale_scale = g;
		cavepreturb_scale_offset = h;
		cavepreturb_select_low = i;
		cavepreturb_select_high = j;
		cavepreturb_select_threshold = k;
		cavepreturb_select_falloff = l;
	}

	double getVals(int i) {
		double x[12];

		x[0] = cavepreturb_fractal_type;
		x[1] = cavepreturb_fractal_basistype;
		x[2] = cavepreturb_fractal_interptype;
		x[3] = cavepreturb_fractal_octaves;
		x[4] = cavepreturb_fractal_frequency;
		x[5] = cavepreturb_fractal_seed;
		x[6] = cavepreturb_scale_scale;
		x[7] = cavepreturb_scale_offset;
		x[8] = cavepreturb_select_low;
		x[9] = cavepreturb_select_high;
		x[10] = cavepreturb_select_threshold;
		x[11] = cavepreturb_select_falloff;

		return x[i];
	}

	double get_cavepreturb_fractal_type() {
		return cavepreturb_fractal_type;
	}

	double get_cavepreturb_fractal_basistype() {
		return cavepreturb_fractal_basistype;
	}

	double get_cavepreturb_fractal_interptype() {
		return cavepreturb_fractal_interptype;
	}

	double get_cavepreturb_fractal_octaves() {
		return cavepreturb_fractal_octaves;
	}

	double get_cavepreturb_fractal_frequency() {
		return cavepreturb_fractal_frequency;
	}

	double get_cavepreturb_fractal_seed() {
		return cavepreturb_fractal_seed;
	}

	double get_cavepreturb_scale_scale() {
		return cavepreturb_scale_scale;
	}

	double get_cavepreturb_scale_offset() {
		return cavepreturb_scale_offset;
	}

	double get_cavepreturb_select_low() {
		return cavepreturb_select_low;
	}

	double get_cavepreturb_select_high() {
		return cavepreturb_select_high;
	}

	double get_cavepreturb_select_threshold() {
		return cavepreturb_select_threshold;
	}

	double get_cavepreturb_select_falloff() {
		return cavepreturb_select_falloff;
	}

private:
	double cavepreturb_fractal_type;
	double cavepreturb_fractal_basistype;
	double cavepreturb_fractal_interptype;
	double cavepreturb_fractal_octaves;
	double cavepreturb_fractal_frequency;
	double cavepreturb_fractal_seed;
	double cavepreturb_scale_scale;
	double cavepreturb_scale_offset;
	double cavepreturb_select_low;
	double cavepreturb_select_high;
	double cavepreturb_select_threshold;
	double cavepreturb_select_falloff;
};