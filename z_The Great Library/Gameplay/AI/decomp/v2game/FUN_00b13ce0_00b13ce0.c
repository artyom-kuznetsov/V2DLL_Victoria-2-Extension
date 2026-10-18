// FUN_00b13ce0 @ 00b13ce0 body=[[00b13ce0, 00b13d2b]]


void FUN_00b13ce0(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  FUN_00b13c30(param_1);
  puVar1 = (undefined1 *)*in_ECX;
  if (puVar1 != (undefined1 *)0x0) {
    for (iVar2 = in_ECX[1] + -1; -1 < iVar2; iVar2 = iVar2 + -1) {
      if (puVar1[iVar2] != (char)param_1) {
        if (iVar2 == in_ECX[1] + -1) {
          return;
        }
        in_ECX[1] = iVar2 + 1;
        puVar1[iVar2 + 1] = 0;
        return;
      }
    }
    in_ECX[1] = 0;
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
    }
  }
  return;
}

