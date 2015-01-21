class Mountains {
public:
	Mountains()
	{
	}

	void setVals(double a, double b, double c, double d, double e, double f, double g, double h, double i, double j, double k) {
		mountains_fractal_type = a;
		mountains_fractal_basistype = b;
		mountains_fractal_interptype = c;
		mountains_fractal_octaves = d;
		mountains_fractal_frequency = e;
		mountains_fractal_seed = f;
		mountains_autocorrect_min = g;
		mountains_autocorrect_max = h;
		mountains_scale_scale = i;
		mountains_scale_offset = j;
		mountains_y_scale_scale = k;
	}

	double getVals(int i) {
		double x[11];

		x[0] = mountains_fractal_type;
		x[1] = mountains_fractal_basistype;
		x[2] = mountains_fractal_interptype;
		x[3] = mountains_fractal_octaves;
		x[4] = mountains_fractal_frequency;
		x[5] = mountains_fractal_seed;
		x[6] = mountains_autocorrect_min;
		x[7] = mountains_autocorrect_max;
		x[8] = mountains_scale_scale;
		x[9] = mountains_scale_offset;
		x[10] = mountains_y_scale_scale;

		return x[i];
	}

	double get_mountains_fractal_type() {
		return mountains_fractal_type;
	}

	double get_mountains_fractal_basistype() {
		return mountains_fractal_basistype;
	}

	double get_mountains_fractal_interptype() {
		return mountains_fractal_interptype;
	}

	double get_mountains_fractal_octaves() {
		return mountains_fractal_octaves;
	}

	double get_mountains_fractal_frequency() {
		return mountains_fractal_frequency;
	}

	double get_mountains_fractal_seed() {
		return mountains_fractal_seed;
	}

	double get_mountains_autocorrect_min() {
		return mountains_autocorrect_min;
	}

	double get_mountains_autocorrect_max() {
		return mountains_autocorrect_max;
	}

	double get_mountains_scale_scale() {
		return mountains_scale_scale;
	}

	double get_mountains_scale_offset() {
		return mountains_scale_offset;
	}

	double get_mountains_y_scale_scale() {
		return mountains_y_scale_scale;
	}

private:
	double mountains_fractal_type;
	double mountains_fractal_basistype;
	double mountains_fractal_interptype;
	double mountains_fractal_octaves;
	double mountains_fractal_frequency;
	double mountains_fractal_seed;
	double mountains_autocorrect_min;
	double mountains_autocorrect_max;
	double mountains_scale_scale;
	double mountains_scale_offset;
	double mountains_y_scale_scale;
};