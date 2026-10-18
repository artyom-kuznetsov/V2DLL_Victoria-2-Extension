// __amsg_exit @ 00ab220b body=[[00ab220b, 00ab2228]]


/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2010 Release */

void __cdecl __amsg_exit(int param_1)

{
  code *pcVar1;
  
  __FF_MSGBANNER();
  __NMSG_WRITE(param_1);
  __exit(0xff);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

