class Highlands {
public:
	Highlands()
	{
	}

	void setVals(double a, double b, double c, double d, double e, double f, double g, double h, double i, double j, double k) {
		highlands_fractal_type = a;
		highlands_fractal_basistype = b;
		highlands_fractal_interptype = c;
		highlands_fractal_octaves = d;
		highlands_fractal_frequency = e;
		highlands_fractal_seed = f;
		highlands_autocorrect_min = g;
		highlands_autocorrect_max = h;
		highlands_scale_scale = i;
		highlands_scale_offset = j;
		highlands_y_scale_scale = k;
	}

	double getVals(int i) {
		double x[11];

		x[0] = highlands_fractal_type;
		x[1] = highlands_fractal_basistype;
		x[2] = highlands_fractal_interptype;
		x[3] = highlands_fractal_octaves;
		x[4] = highlands_fractal_frequency;
		x[5] = highlands_fractal_seed;
		x[6] = highlands_autocorrect_min;
		x[7] = highlands_autocorrect_max;
		x[8] = highlands_scale_scale;
		x[9] = highlands_scale_offset;
		x[10] = highlands_y_scale_scale;

		return x[i];
	}

	double get_highlands_fractal_type() {
		return highlands_fractal_type;
	}

	double get_highlands_fractal_basistype() {
		return highlands_fractal_basistype;
	}

	double get_highlands_fractal_interptype() {
		return highlands_fractal_interptype;
	}

	double get_highlands_fractal_octaves() {
		return highlands_fractal_octaves;
	}

	double get_highlands_fractal_frequency() {
		return highlands_fractal_frequency;
	}

	double get_highlands_fractal_seed() {
		return highlands_fractal_seed;
	}

	double get_highlands_autocorrect_min() {
		return highlands_autocorrect_min;
	}

	double get_highlands_autocorrect_max() {
		return highlands_autocorrect_max;
	}

	double get_highlands_scale_scale() {
		return highlands_scale_scale;
	}

	double get_highlands_scale_offset() {
		return highlands_scale_offset;
	}

	double get_highlands_y_scale_scale() {
		return highlands_y_scale_scale;
	}

private:
	double highlands_fractal_type;
	double highlands_fractal_basistype;
	double highlands_fractal_interptype;
	double highlands_fractal_octaves;
	double highlands_fractal_frequency;
	double highlands_fractal_seed;
	double highlands_autocorrect_min;
	double highlands_autocorrect_max;
	double highlands_scale_scale;
	double highlands_scale_offset;
	double highlands_y_scale_scale;
};