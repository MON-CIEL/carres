class CCarre {

	private :

		int sx;
		int sy;
		int cote;

	public :

		// Paramètres en entrée : 
		// Paramètres en sortie : 
		// Valeur de retour : 
		// traitement 
		CCarre();

		// Paramètres en entrée : 
		// Paramètres en sortie : 
		// Valeur de retour : 
		// traitement 
		CCarre(int sx, int sy ,int cote);

		// Paramètres en entrée : 
		// Paramètres en sortie : 
		// Valeur de retour : 
		// traitement 
		void Setsx(int sx1);

		// Paramètres en entrée : 
		// Paramètres en sortie : 
		// Valeur de retour : 
		// traitement 
		void Setsy(int sy1);

		// Paramètres en entrée : 
		// Paramètres en sortie : 
		// Valeur de retour : 
		// traitement 
		void Setcote(int cote1);

		// Paramètres en entrée : 
		// Paramètres en sortie : 
		// Valeur de retour : 
		// traitement 
		void Afficher();

		// Paramètres en entrée : 
		// Paramètres en sortie : 
		// Valeur de retour : 
		// traitement 
		void AfficherDeplacement();

		// Paramètres en entrée : 
		// Paramètres en sortie : 
		// Valeur de retour : 
		// traitement 
		int Getsx();

		// Paramètres en entrée : 
		// Paramètres en sortie : 
		// Valeur de retour : 
		// traitement 
		int Getsy();

		// Paramètres en entrée : 
		// Paramètres en sortie : 
		// Valeur de retour : 
		// traitement 
		int GetCote();

		// "Déplace" le carré sans le dessiner. Les attributs x et y  
		// sont modifiés en ajoutant ou retranchant la valeur de saut en fonction de  
		// la direction : par ex direction nord saut=2 y=y-2 
		// Entrées : 
		//  - direction : vaut 'n' si nord, 's' si sud, 'o' si ouest, 'e' si est 
		//   - saut : nombre de pixels de déplacement du carré 
		// Sortie : Aucune 
		void Deplacer(char direction, int saut);

		// Paramètres en entrée : 
		// Paramètres en sortie : 
		// Valeur de retour : 
		// traitement 
		void Deplacer(int dx, int dxy);
};
