// FUN_009deee0 @ 009deee0 body=[[009deee0, 009def66] [009def6a, 009def7e] [009def8c, 009defde] [009defe2, 009df026] [009df02a, 009df045] [009df049, 009df07c]]


void FUN_009deee0(void)

{
  int iVar1;
  LPCSTR lpClassName;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3baa6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e3bcfc;
  in_ECX[2] = &PTR_LAB_00e3bd20;
  local_8 = 6;
  if ((HWND)in_ECX[0x36] != (HWND)0x0) {
    DestroyWindow((HWND)in_ECX[0x36]);
  }
  if ((uint)in_ECX[0x28] < 0x10) {
    lpClassName = (LPCSTR)(in_ECX + 0x23);
  }
  else {
    lpClassName = (LPCSTR)in_ECX[0x23];
  }
  UnregisterClassA(lpClassName,(HINSTANCE)in_ECX[0x2f]);
  iVar1 = in_ECX[0x20];
  if (iVar1 != 0) {
    FUN_00a467d0();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  iVar1 = in_ECX[0x44];
  if (iVar1 != 0) {
    FUN_00a6f7c0();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  if ((undefined4 *)in_ECX[0x3a] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x3a])(1);
  }
  local_8._0_1_ = 5;
  if ((undefined4 *)in_ECX[0x39] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x39])(1);
  }
  local_8._0_1_ = 4;
  if ((undefined4 *)in_ECX[0x38] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x38])(1);
  }
  if (0xf < (uint)in_ECX[0x28]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x23]);
  }
  in_ECX[0x28] = 0xf;
  in_ECX[0x27] = 0;
  *(undefined1 *)(in_ECX + 0x23) = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  if ((undefined4 *)in_ECX[0x21] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x21])(1);
  }
  if (0xf < (uint)in_ECX[0x1e]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x19]);
  }
  in_ECX[0x1e] = 0xf;
  in_ECX[0x1d] = 0;
  *(undefined1 *)(in_ECX + 0x19) = 0;
  if (0xf < (uint)in_ECX[0x12]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xd]);
  }
  in_ECX[0x12] = 0xf;
  in_ECX[0x11] = 0;
  *(undefined1 *)(in_ECX + 0xd) = 0;
  local_8 = 0xffffffff;
  in_ECX[2] = &PTR_FUN_00e3bcdc;
  FUN_009e0800();
  ExceptionList = local_10;
  return;
}

