#include "Tuple.h"

//TODO: Fix Low Precision, finish comments

/** A Tuple which represents movement or velocity in 2 dimensions
 * Allows for calculations with respect to Magnitude and Angle
 */
class Vector:public Tuple {
  private:
    typedef Tuple super;
  public:

    /** Empty Constructor.
     * Creates a Vector object with 0 and 0 values
     */
    Vector();

    /** Argument Constructor
     * Creates a Vector object with x and y values
     *@param v1 thing 1
     *@param v2 thing 2
     */
    Vector(double v1, double v2);

    /** Tuple Constructor.
     * Creates a vector with the values of a Tuple
     *@param t Tuple
     */
    Vector(Tuple t);

    /**
     *
     *@return Angle of Vector in Radians
     */
    double getAngle();

    /**
     *
     *@return Magnitude of Vector
     */
    double getMagnitude();

    /** Returns a new Vector at the same Angle with a new Magnitude
     *
     *@param m New Magnitude
     *@return Vector at new Magnitude
     */
    Vector atMagnitude(double m);

    /** Returns a new Vector at the same Magnitude with a new Angle
     *
     *@param a New Angle in Radians
     *@return Vector at new Angle
     */
    Vector atAngle(double a);

    /** Returns Vector of the Dot Product of 2 vectors
     * Return a new Vector at the angle of the given vector with a Magnitude
     * equal to the component of This which is at the same angle as the given
     * vector
     */
    Vector dotProd(Vector v);
};
