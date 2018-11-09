// author: chris-scientist
// created at: 31/10/2018
// description: classe qui recense les codes d'erreurs

#ifndef ZLATKOERRORMANAGER
#define ZLATKOERRORMANAGER

class ZlatkoErrorManager {
  public:
    static const int NO_ERROR = 1;
    static const int UNDEFINED_ERROR = 0;
    static const int RESERVED_STATE_ERROR = -1;
    static const int MORE_STATE_ERROR = -2;
    static const int STATE_ALREADY_ADDED_ERROR = -3;
};

#endif

