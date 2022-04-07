class tSingleton
{
public:
// Delete copy/move/assignment constructor, since this class is a singleton
  explicit tSingleton(); //Constructor
  tSingleton (const tSingleton &) = delete; //Copy Constructor
  tSingleton &operator=(const tSingleton &) = delete; //Copy assignment Operator 
  tSingleton (tSingleton &&) = delete; //Move constructor
  tSingleton &operator=(tSingleton) = delete; //Move assignment operator
  virtual ~tSingleton() = default; //destructor
};
