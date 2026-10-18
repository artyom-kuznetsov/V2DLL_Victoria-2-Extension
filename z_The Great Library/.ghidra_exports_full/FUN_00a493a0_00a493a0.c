// FUN_00a493a0 @ 00a493a0 body=[[00a493a0, 00a4942a] [00a4942e, 00a49537]]


void FUN_00a493a0(int param_1)

{
  int *piVar1;
  undefined4 ***pppuVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  undefined8 *puVar5;
  int iVar6;
  undefined1 local_54 [28];
  undefined4 **local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  float local_10;
  float fStack_c;
  float local_8;
  
  if (*(int *)(in_ECX + 0xac) != 0) {
    piVar1 = *(int **)(in_ECX + 0xac);
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = (undefined4 **)((uint)local_38[0] & 0xffffff00);
  FUN_00408ed0(in_ECX + 0x90,0,0xffffffff);
  pppuVar2 = (undefined4 ***)local_38[0];
  if (local_24 < 0x10) {
    pppuVar2 = local_38;
  }
  D3DXCreateTextureFromFileExA
            (*(undefined4 *)(param_1 + 100),pppuVar2,0xffffffff,0xffffffff,0xffffffff,0,0,1,
             0xffffffff,0xffffffff,0,local_54,0,(undefined4 *)(in_ECX + 0xac));
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  (**(code **)(**(int **)(param_1 + 100) + 0x68))
            (*(int **)(param_1 + 100),120000,0x248,0x42,0,in_ECX + 0x2c70,0);
  local_14 = 0;
  local_1c = 0;
  uStack_18 = 0;
  puVar5 = (undefined8 *)(in_ECX + 0x2c74);
  iVar6 = 10000;
  do {
    iVar3 = FUN_00ab047b();
    iVar4 = FUN_00ab047b();
    fStack_c = ((float)iVar4 / 32767.0) * 0.1;
    local_10 = ((float)iVar3 / 32767.0) * 0.1 - 0.05;
    iVar3 = FUN_00ab047b();
    local_8 = ((float)iVar3 / 32767.0) * 0.1 - 0.05;
    puVar5[2] = CONCAT44(fStack_c,local_10);
    *puVar5 = CONCAT44(uStack_18,local_1c);
    *(float *)(puVar5 + 3) = local_8;
    *(undefined4 *)(puVar5 + 1) = 0;
    *(undefined4 *)((int)puVar5 + 0xc) = 0xff7f7f66;
    puVar5 = (undefined8 *)((int)puVar5 + 0x34);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}

