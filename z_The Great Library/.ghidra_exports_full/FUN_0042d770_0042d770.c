// FUN_0042d770 @ 0042d770 body=[[0042d770, 0042d7b5]]


void FUN_0042d770(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *unaff_ESI;
  
  uVar1 = lua_objlen();
  uVar2 = lua_tolstring();
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *unaff_ESI = 0;
  FUN_00409350(uVar2,uVar1);
  return;
}

