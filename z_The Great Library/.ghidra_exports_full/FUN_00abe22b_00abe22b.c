// __shift @ 00abe22b body=[[00abe22b, 00abe249]]


/* Library Function - Single Match
    __shift
   
   Library: Visual Studio 2010 Release */

void __shift(void)

{
  char *in_EAX;
  size_t sVar1;
  int unaff_EDI;
  
  if (unaff_EDI != 0) {
    sVar1 = _strlen(in_EAX);
    FID_conflict__memcpy(in_EAX + unaff_EDI,in_EAX,sVar1 + 1);
  }
  return;
}

