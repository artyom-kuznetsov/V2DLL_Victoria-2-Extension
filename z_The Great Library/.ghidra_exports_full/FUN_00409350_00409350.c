// FUN_00409350 @ 00409350 body=[[00409350, 00409444]]


void FUN_00409350(int *param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  int *in_ECX;
  
  if (param_1 != (int *)0x0) {
    uVar1 = in_ECX[5];
    piVar2 = in_ECX;
    if (0xf < uVar1) {
      piVar2 = (int *)*in_ECX;
    }
    if (piVar2 <= param_1) {
      piVar2 = in_ECX;
      if (0xf < uVar1) {
        piVar2 = (int *)*in_ECX;
      }
      if (param_1 < (int *)(in_ECX[4] + (int)piVar2)) {
        if (0xf < uVar1) {
          FUN_00408ed0(in_ECX,(int)param_1 - *in_ECX,param_2);
          return;
        }
        FUN_00408ed0(in_ECX,(int)param_1 - (int)in_ECX,param_2);
        return;
      }
    }
  }
  if (param_2 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("string too long");
  }
  if ((uint)in_ECX[5] < param_2) {
    FUN_00409640(param_2,in_ECX[4]);
    if (param_2 == 0) {
      return;
    }
  }
  else if (param_2 == 0) {
    in_ECX[4] = 0;
    if (0xf < (uint)in_ECX[5]) {
      *(undefined1 *)*in_ECX = 0;
      return;
    }
    *(undefined1 *)in_ECX = 0;
    return;
  }
  piVar2 = in_ECX;
  if (0xf < (uint)in_ECX[5]) {
    piVar2 = (int *)*in_ECX;
  }
  FID_conflict__memcpy(piVar2,param_1,param_2);
  in_ECX[4] = param_2;
  if ((uint)in_ECX[5] < 0x10) {
    *(undefined1 *)((int)in_ECX + param_2) = 0;
    return;
  }
  *(undefined1 *)(*in_ECX + param_2) = 0;
  return;
}

