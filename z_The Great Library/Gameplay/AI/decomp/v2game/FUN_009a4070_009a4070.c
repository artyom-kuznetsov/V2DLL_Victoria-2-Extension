// FUN_009a4070 @ 009a4070 body=[[009a4070, 009a409d] [009a40aa, 009a4145]]


void FUN_009a4070(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  int *in_ECX;
  uint local_c;
  
  piVar1 = in_ECX + 0x2b;
  in_ECX[0x29] = param_2;
  if (*piVar1 == 0) {
    *piVar1 = 0;
    in_ECX[0x2c] = 0;
    in_ECX[0x2d] = 0;
    local_c = local_c & 0xffff0000;
    puVar3 = (undefined8 *)FUN_00aae9af(0x28);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      *puVar3 = CONCAT44(param_4,param_3);
      puVar3[1] = 1;
      puVar3[2] = 0;
      *(uint *)(puVar3 + 3) = local_c;
      *(undefined4 *)((int)puVar3 + 0x1c) = 0;
      *(undefined4 *)(puVar3 + 4) = 0;
      *(undefined1 *)((int)puVar3 + 0x24) = 0;
    }
    iVar2 = in_ECX[0x2d];
    in_ECX[0x2c] = (int)puVar3;
    in_ECX[0x2d] = iVar2 + 1;
    if (iVar2 == 0) {
      *piVar1 = (int)puVar3;
      puVar3 = puRam00000020;
    }
    puRam00000020 = puVar3;
    (**(code **)(*in_ECX + 4))(param_1,param_2,piVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*piVar1);
}

