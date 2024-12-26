class CCarre {

	private :

		int sx;
		int sy;
		int cote;

	public :

		// Param�tres en entr�e : 
		// Param�tres en sortie : 
		// Valeur de retour : 
		// traitement 
		CCarre();

		// Param�tres en entr�e : 
		// Param�tres en sortie : 
		// Valeur de retour : 
		// traitement 
		CCarre(int sx, int sy ,int cote);

		// Param�tres en entr�e : 
		// Param�tres en sortie : 
		// Valeur de retour : 
		// traitement 
		void Setsx(int sx1);

		// Param�tres en entr�e : 
		// Param�tres en sortie : 
		// Valeur de retour : 
		// traitement 
		void Setsy(int sy1);

		// Param�tres en entr�e : 
		// Param�tres en sortie : 
		// Valeur de retour : 
		// traitement 
		void Setcote(int cote1);

		// Param�tres en entr�e : 
		// Param�tres en sortie : 
		// Valeur de retour : 
		// traitement 
		void Afficher();

		// Param�tres en entr�e : 
		// Param�tres en sortie : 
		// Valeur de retour : 
		// traitement 
		void AfficherDeplacement();

		// Param�tres en entr�e : 
		// Param�tres en sortie : 
		// Valeur de retour : 
		// traitement 
		int Getsx();

		// Param�tres en entr�e : 
		// Param�tres en sortie : 
		// Valeur de retour : 
		// traitement 
		int Getsy();

		// Param�tres en entr�e : 
		// Param�tres en sortie : 
		// Valeur de retour : 
		// traitement 
		int GetCote();

		// "D�place" le carr� sans le dessiner. Les attributs x et y  
		// sont modifi�s en ajoutant ou retranchant la valeur de saut en fonction de  
		// la direction : par ex direction nord saut=2 y=y-2 
		// Entr�es : 
		//  - direction : vaut 'n' si nord, 's' si sud, 'o' si ouest, 'e' si est 
		//   - saut : nombre de pixels de d�placement du carr� 
		// Sortie : Aucune 
		void Deplacer(char direction, int saut);

		// Param�tres en entr�e : 
		// Param�tres en sortie : 
		// Valeur de retour : 
		// traitement 
		void Deplacer(int dx, int dxy);
};
