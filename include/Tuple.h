/** Stores 2 Related Values.
 * @author Chris Muller
 */
class Tuple {
  private:

//Members-----------------------------------------------------------------------

    double x;
    double y;

  public:

//Constructors------------------------------------------------------------------

    /** Empty Constructor.
     * Creates a Tuple object with 0 and 0 values
     */
    Tuple();

    /** Double Argument Constructor.
     * Creates a Tuple object with x and y values;
     *@param x First Value
     *@param y Second Value
     */
    Tuple(double v1, double v2);

    /** Deconstructor.
     * Im gonna be honest, I don't know how these work. Like Kind of but not
     * really
     */
    ~Tuple();

//Getters and Setters-----------------------------------------------------------

    /** Value 1 Getter.
     *@return Value 1
     */
    double getX();

    /** Value 1 Setter.
     *@param v New Value 1
     */
    void setX(double v);

    /** Value 2 Getter.
     *@return Value 2
     */
    double getY();

    /** Value 2 Setter.
     *@param v New Value 2
     */
    void setY(double v);

//Operator Overloads------------------------------------------------------------

    /** Tuple Addition.
     * Returns the Sum of a given Tuple and this.
     *@param v Addend Tuple
     *@return Sum of Tuples
     */
    Tuple operator+(Tuple v);

    /** Tuple Subtraction.
     * Returns the difference of a given Tuple subtracted from this.
     *@param v Subtrahend Tuple
     *@return Difference of Tuples
     */
    Tuple operator-(Tuple v);

    /** Tuple Scalar Multiplication.
     * Multiplies both values of a Tuple by a factor
     *@param f Factor
     *@return Product Tuple
     */
    Tuple operator*(double f);

    /** Tuple Equality.
     * Determines if the corresponding values of a given Tuple and This are
     * equal
     *@param v Tuple
     *@return True if corresponding values are equal
     */
    bool operator==(Tuple v);

//Methods-----------------------------------------------------------------------

};
