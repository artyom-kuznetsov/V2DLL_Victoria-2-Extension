// FUN_00a3ba10 @ 00a3ba10 body=[[00a3ba10, 00a3ba93] [00a3ba97, 00a3bc71]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a3ba10(int param_1)

{
  undefined8 *puVar1;
  int in_ECX;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int unaff_ESI;
  uint local_7c [4];
  float local_6c;
  uint local_68;
  uint uStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  float fStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba1a88;
  local_14 = ExceptionList;
  local_68 = 0xf;
  local_6c = 0.0;
  local_7c[0] = local_7c[0] & 0xffffff00;
  ExceptionList = &local_14;
  FUN_00409350("barchart",8);
  local_c = 0;
  FUN_009be510(param_1 + 0x6bcfc,in_ECX + 100,local_7c,*(undefined4 *)(param_1 + 100));
  local_c = 0xffffffff;
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_7c[0]);
  }
  if (DAT_0132ce98 == 0) {
    (**(code **)(**(int **)(param_1 + 100) + 0x158))
              (*(int **)(param_1 + 100),&DAT_00f07840,&DAT_01258b54);
    DAT_0132cea0 = 1;
    _DAT_0132ceac = 0;
    FUN_009f9630(&DAT_0132ce8c,*(undefined4 *)(param_1 + 100),0x78,0xc,0,0);
    if (DAT_0132ce8c == (int *)0x0) {
      unaff_ESI = 0;
    }
    else {
      uVar2 = 0;
      if ((DAT_0132cea1 != '\0') && (DAT_0132cea2 == '\0')) {
        uVar2 = 0x2000;
      }
      (**(code **)(*DAT_0132ce8c + 0x2c))(DAT_0132ce8c,0,0,&stack0xffffff74,uVar2);
    }
    uStack_5c = DAT_00f092fc;
    puVar1 = (undefined8 *)(unaff_ESI + 0x18);
    uVar3 = 0;
    do {
      local_6c = (float)(int)uVar3 * 0.05;
      uStack_28 = uVar3 & 0xffff;
      local_68 = 0;
      puVar1[-3] = (ulonglong)(uint)local_6c;
      uStack_64 = uVar3 & 0xffff;
      *(uint *)(puVar1 + -2) = uStack_64;
      uVar4 = uVar3 + 1;
      *(ulonglong *)((int)puVar1 + -0xc) = CONCAT44(uStack_5c,local_6c);
      uStack_58 = uVar3 & 0xffff;
      *(uint *)((int)puVar1 + -4) = uStack_58;
      fStack_54 = (float)(int)uVar4 * 0.05;
      uStack_50 = uStack_5c;
      *puVar1 = CONCAT44(uStack_5c,fStack_54);
      uStack_4c = uVar3 & 0xffff;
      *(uint *)(puVar1 + 1) = uStack_4c;
      uStack_44 = uStack_5c;
      *(ulonglong *)((int)puVar1 + 0xc) = CONCAT44(uStack_5c,fStack_54);
      uStack_40 = uVar3 & 0xffff;
      *(uint *)((int)puVar1 + 0x14) = uStack_40;
      uStack_38 = 0;
      uStack_34 = uVar3 & 0xffff;
      puVar1[3] = (ulonglong)(uint)fStack_54;
      *(uint *)(puVar1 + 4) = uStack_34;
      uStack_2c = 0;
      *(ulonglong *)((int)puVar1 + 0x24) = (ulonglong)(uint)local_6c;
      *(uint *)((int)puVar1 + 0x2c) = uStack_28;
      puVar1 = puVar1 + 9;
      uVar3 = uVar4;
    } while ((int)uVar4 < 0x14);
    fStack_60 = local_6c;
    fStack_48 = fStack_54;
    fStack_3c = fStack_54;
    fStack_30 = local_6c;
    (**(code **)(*DAT_0132ce8c + 0x30))(DAT_0132ce8c);
  }
  ExceptionList = local_14;
  return;
}

