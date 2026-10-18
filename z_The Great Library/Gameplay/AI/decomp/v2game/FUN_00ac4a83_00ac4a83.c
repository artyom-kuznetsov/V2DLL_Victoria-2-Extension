// UScore @ 00ac4a83 body=[[00ac4a83, 00ac4aa1]]


/* Library Function - Single Match
    public: static char const * __cdecl UnDecorator::UScore(enum Tokens)
   
   Library: Visual Studio 2010 Release */

char * __cdecl UnDecorator::UScore(Tokens param_1)

{
  char *pcVar1;
  
  pcVar1 = (&PTR_s___based__00ddbd20)[param_1];
  if ((~DAT_00f20988 & 1) == 0) {
    pcVar1 = pcVar1 + 2;
  }
  return pcVar1;
}

