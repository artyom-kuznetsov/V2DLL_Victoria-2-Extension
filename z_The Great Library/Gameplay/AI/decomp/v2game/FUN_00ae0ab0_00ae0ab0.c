// FUN_00ae0ab0 @ 00ae0ab0 body=[[00ae0ab0, 00ae0c23]]


void FUN_00ae0ab0(uint param_1)

{
  uint uVar1;
  uint *in_ECX;
  uint uVar2;
  
  if (in_ECX[10] <= param_1) {
    if ((in_ECX[0xb] & 1) != 0) {
      uVar1 = (*(code *)PTR_FUN_00f01b0c)(*in_ECX,param_1 * 0x40 + 0x20,500,0x20,0,0,0);
      uVar2 = uVar1 & 0x1f;
      *in_ECX = uVar1;
      if ((short)uVar2 == 0) {
        uVar2 = 0x20;
      }
      in_ECX[3] = (uVar1 - uVar2) + 0x20;
    }
    if ((in_ECX[0xb] & 2) != 0) {
      uVar1 = (*(code *)PTR_FUN_00f01b0c)(in_ECX[1],param_1 * 0x40 + 0x20,500,0x20,0,0,0);
      uVar2 = uVar1 & 0x1f;
      in_ECX[1] = uVar1;
      if ((short)uVar2 == 0) {
        uVar2 = 0x20;
      }
      in_ECX[4] = (uVar1 - uVar2) + 0x20;
    }
    if ((in_ECX[0xb] & 4) != 0) {
      uVar1 = (*(code *)PTR_FUN_00f01b0c)(in_ECX[2],param_1 * 0x40 + 0x20,500,0x20,0,0,0);
      uVar2 = uVar1 & 0x1f;
      in_ECX[2] = uVar1;
      if ((short)uVar2 == 0) {
        uVar2 = 0x20;
      }
      in_ECX[5] = (uVar1 - uVar2) + 0x20;
    }
    if ((in_ECX[0xb] & 0x10) != 0) {
      uVar1 = (*(code *)PTR_FUN_00f01b0c)(in_ECX[6],param_1 * 0x38,500,0x10,0,0,0);
      in_ECX[6] = uVar1;
    }
    if ((in_ECX[0xb] & 8) != 0) {
      uVar1 = (*(code *)PTR_FUN_00f01b0c)(in_ECX[7],param_1 * 0x38,500,0x10,0,0,0);
      in_ECX[7] = uVar1;
    }
    uVar1 = (*(code *)PTR_FUN_00f01b0c)(in_ECX[8],param_1 * 4,500,0x10,0,0,0);
    in_ECX[8] = uVar1;
    in_ECX[10] = param_1;
  }
  return;
}

