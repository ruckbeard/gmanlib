class Lowlands {
public:
	Lowlands()
	{
	}
	
	void setVals(double a, double b, double c, double d, double e, double f, double g, double h, double i, double j, double k) {
		lowlands_fractal_type = a;
		lowlands_fractal_basistype = b;
		lowlands_fractal_interptype = c;
		lowlands_fractal_octaves = d;
		lowlands_fractal_frequency = e;
		lowlands_fractal_seed = f;
		lowlands_autocorrect_min = g;
		lowlands_autocorrect_max = h;
		lowlands_scale_scale = i;
		lowlands_scale_offset = j;
		lowlands_y_scale_scale = k;
	}

	double getVals(int i) {
		double x[11];

		x[0] = lowlands_fractal_type;
		x[1] = lowlands_fractal_basistype;
		x[2] = lowlands_fractal_interptype;
		x[3] = lowlands_fractal_octaves;
		x[4] = lowlands_fractal_frequency;
		x[5] = lowlands_fractal_seed;
		x[6] = lowlands_autocorrect_min;
		x[7] = lowlands_autocorrect_max;
		x[8] = lowlands_scale_scale;
		x[9] = lowlands_scale_offset;
		x[10] = lowlands_y_scale_scale;

		return x[i];
	}

	double get_lowlands_fractal_type() {
		return lowlands_fractal_type;
	}

	double get_lowlands_fractal_basistype() {
		return lowlands_fractal_basistype;
	}

	double get_lowlands_fractal_interptype() {
		return lowlands_fractal_interptype;
	}

	double get_lowlands_fractal_octaves() {
		return lowlands_fractal_octaves;
	}

	double get_lowlands_fractal_frequency() {
		return lowlands_fractal_frequency;
	}

	double get_lowlands_fractal_seed() {
		return lowlands_fractal_seed;
	}

	double get_lowlands_autocorrect_min() {
		return lowlands_autocorrect_min;
	}

	double get_lowlands_autocorrect_max() {
		return lowlands_autocorrect_max;
	}

	double get_lowlands_scale_scale() {
		return lowlands_scale_scale;
	}

	double get_lowlands_scale_offset() {
		return lowlands_scale_offset;
	}

	double get_lowlands_y_scale_scale() {
		return lowlands_y_scale_scale;
	}

private:
	double lowlands_fractal_type;
	double lowlands_fractal_basistype;
	double lowlands_fractal_interptype;
	double lowlands_fractal_octaves;
	double lowlands_fractal_frequency;
	double lowlands_fractal_seed;
	double lowlands_autocorrect_min;
	double lowlands_autocorrect_max;
	double lowlands_scale_scale;
	double lowlands_scale_offset;
	double lowlands_y_scale_scale;
};