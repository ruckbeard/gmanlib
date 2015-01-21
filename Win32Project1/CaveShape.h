class CaveShape {
public:
	CaveShape()
	{
	}

	void setVals(double a, double b, double c, double d, double e, double f, double g, double h) {
		caveshape_fractal_type = a;
		caveshape_fractal_basistype = b;
		caveshape_fractal_interptype = c;
		caveshape_fractal_octaves = d;
		caveshape_fractal_frequency = e;
		caveshape_fractal_seed = f;
		caveshape_attenuate_bias = g;
		caveshape_attenuate_combiner_type = h;
	}

	double getVals(int i) {
		double x[8];

		x[0] = caveshape_fractal_type;
		x[1] = caveshape_fractal_basistype;
		x[2] = caveshape_fractal_interptype;
		x[3] = caveshape_fractal_octaves;
		x[4] = caveshape_fractal_frequency;
		x[5] = caveshape_fractal_seed;
		x[6] = caveshape_attenuate_bias;
		x[7] = caveshape_attenuate_combiner_type;

		return x[i];
	}

	double get_caveshape_fractal_type() {
		return caveshape_fractal_type;
	}

	double get_caveshape_fractal_basistype() {
		return caveshape_fractal_basistype;
	}

	double get_caveshape_fractal_interptype() {
		return caveshape_fractal_interptype;
	}

	double get_caveshape_fractal_octaves() {
		return caveshape_fractal_octaves;
	}

	double get_caveshape_fractal_frequency() {
		return caveshape_fractal_frequency;
	}

	double get_caveshape_fractal_seed() {
		return caveshape_fractal_seed;
	}

	double get_caveshape_attenuate_bias() {
		return caveshape_attenuate_bias;
	}

	double get_caveshape_attenuate_combiner_type() {
		return caveshape_attenuate_combiner_type;
	}

private:
	double caveshape_fractal_type;
	double caveshape_fractal_basistype;
	double caveshape_fractal_interptype;
	double caveshape_fractal_octaves;
	double caveshape_fractal_frequency;
	double caveshape_fractal_seed;
	double caveshape_attenuate_bias;
	double caveshape_attenuate_combiner_type;
};