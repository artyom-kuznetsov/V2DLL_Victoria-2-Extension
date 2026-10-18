// FUN_009be340 @ 009be340 body=[[009be340, 009be37d]]


int FUN_009be340(void)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 *unaff_EDI;
  
  if (0xf < (uint)in_EAX[5]) {
    in_EAX = (undefined4 *)*in_EAX;
  }
  lua_getfield(*unaff_EDI,0xffffd8ee,in_EAX);
  iVar1 = lua_pcall(*unaff_EDI,0,0,0);
  if (iVar1 != 0) {
    FUN_009bdf40();
  }
  return iVar1;
}

