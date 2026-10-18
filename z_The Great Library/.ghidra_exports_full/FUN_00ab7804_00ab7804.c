// __FF_MSGBANNER @ 00ab7804 body=[[00ab7804, 00ab783c]]


/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2010 Release */

void __cdecl __FF_MSGBANNER(void)

{
  int iVar1;
  
  iVar1 = __set_error_mode(3);
  if (iVar1 != 1) {
    iVar1 = __set_error_mode(3);
    if (iVar1 != 0) {
      return;
    }
    if (DAT_00ef2590 != 1) {
      return;
    }
  }
  __NMSG_WRITE(0xfc);
  __NMSG_WRITE(0xff);
  return;
}

