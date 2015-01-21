namespace AccidentalNoise {
	class ModuleBase {
	public:
		int seed;
		const static int MaxSources = 20;
		double Get(double x, double y);
	};

	class ScalarParameter {
	public:
		void set(ModuleBase m)
		{
			m_source = m;
		}
	protected:
		ModuleBase m_source;
	};
};
