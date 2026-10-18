// FUN_00ae66b0 @ 00ae66b0 body=[[00ae66b0, 00ae6706]]


void FUN_00ae66b0(int *param_1)

{
  undefined4 *puVar1;
  int *in_ECX;
  uint uVar2;
  
  if (param_1 != in_ECX) {
    in_ECX[1] = 0;
    *(short *)(in_ECX + 3) = (short)param_1[3];
    uVar2 = param_1[1];
    in_ECX[1] = uVar2;
    if ((uint)in_ECX[2] < uVar2) {
      FUN_00aeb6c0(uVar2 + 1);
    }
    uVar2 = 0;
    if (in_ECX[1] != 0) {
      do {
        puVar1 = (undefined4 *)(*in_ECX + uVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(uVar2 * 4 + *param_1);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)in_ECX[1]);
    }
  }
  return;
}

