// FUN_0064cf70 @ 0064cf70 body=[[0064cf70, 0064d046] [0064d04a, 0064d0cf] [0064d0d3, 0064d12c] [0064d130, 0064d17b] [0064d17f, 0064d23c] [0064d240, 0064d369] [0064d36d, 0064d3e2] [0064d3e6, 0064d43f] [0064d443, 0064d553] [0064d557, 0064d58d] [0064d591, 0064d5a5]]


/* WARNING: Removing unreachable block (ram,0x0064d436) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0064cf70(int *param_1,int *param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                 undefined1 *param_6)

{
  undefined4 uVar1;
  uint *puVar2;
  int *piVar3;
  short *psVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint unaff_EBX;
  uint *puStack_17c;
  uint *puStack_178;
  uint *puStack_174;
  uint local_164;
  uint *puStack_160;
  uint auStack_15c [2];
  uint uStack_154;
  uint auStack_150 [6];
  uint uStack_138;
  uint uStack_130;
  uint auStack_12c [9];
  uint auStack_108 [3];
  undefined1 auStack_fc [4];
  undefined4 uStack_f8;
  uint uStack_f4;
  undefined4 auStack_ec [3];
  int iStack_e0;
  undefined1 auStack_dc [4];
  uint uStack_d8;
  undefined4 uStack_a8;
  short sStack_98;
  undefined2 uStack_96;
  undefined1 uStack_38;
  undefined1 uStack_30;
  undefined1 uStack_2b;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b8c2e5;
  local_14 = ExceptionList;
  local_164 = 0;
  if (DAT_013f0848 != 0) {
    return;
  }
  puStack_174 = (uint *)0x64cfb0;
  ExceptionList = &local_14;
  uVar1 = (**(code **)(*param_2 + 4))();
  puStack_174 = (uint *)0x2c;
  puStack_178 = (uint *)0x64cfb9;
  puVar2 = (uint *)FUN_00aae9af();
  uStack_c = 0;
  puStack_160 = puVar2;
  if (puVar2 == (uint *)0x0) {
    auStack_15c[0] = 0;
  }
  else {
    puStack_174 = (uint *)0x7;
    puStack_178 = (uint *)0xe08fc8;
    uStack_f4 = 0xf;
    uStack_f8 = 0;
    auStack_108[0] = auStack_108[0] & 0xffffff00;
    puStack_17c = (uint *)0x64cff3;
    FUN_00409350();
    puStack_178 = auStack_108;
    uStack_c = CONCAT31(uStack_c._1_3_,1);
    local_164 = 1;
    puStack_17c = puVar2;
    puStack_174 = (uint *)uVar1;
    auStack_15c[0] = FUN_006475d0();
  }
  uStack_c = 0xffffffff;
  if ((local_164 & 1) != 0) {
    local_164 = local_164 & 0xfffffffe;
    if (0xf < uStack_f4) {
      puStack_174 = (uint *)auStack_108[0];
                    /* WARNING: Subroutine does not return */
      puStack_178 = (uint *)&UNK_0064d047;
      FUN_00aae91b();
    }
    uStack_f4 = 0xf;
    uStack_f8 = 0;
    auStack_108[0] = auStack_108[0] & 0xffffff00;
  }
  puStack_174 = auStack_ec;
  puStack_178 = (uint *)param_2;
  puStack_17c = (uint *)0x64d073;
  FUN_006a8210();
  uStack_c = 3;
  puStack_174 = (uint *)0x10;
  puStack_178 = (uint *)0xe08dbc;
  auStack_12c[1] = 0xf;
  auStack_12c[0] = 0;
  auStack_150[5] = auStack_150[5] & 0xffffff00;
  puStack_17c = (uint *)0x64d09a;
  FUN_00409350();
  uStack_c = CONCAT31(uStack_c._1_3_,4);
  puStack_174 = auStack_150 + 5;
  puStack_178 = (uint *)0x64d0b5;
  piVar3 = (int *)(**(code **)(**(int **)(auStack_15c[0] + 0x20) + 0x34))();
  puStack_10._0_1_ = 3;
  if (0xf < auStack_12c[0]) {
    puStack_178 = (uint *)auStack_150[4];
                    /* WARNING: Subroutine does not return */
    puStack_17c = (uint *)&UNK_0064d0d0;
    FUN_00aae91b();
  }
  puStack_178 = (uint *)0x0;
  puStack_17c = (uint *)&DAT_00ded94d;
  auStack_12c[0] = 0xf;
  uStack_130 = 0;
  auStack_150[4] = auStack_150[4] & 0xffffff00;
  auStack_150[2] = 0xf;
  auStack_150[1] = 0;
  auStack_15c[0] = auStack_15c[0] & 0xffffff00;
  FUN_00409350();
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,5);
  puStack_178 = (uint *)0x0;
  puStack_17c = auStack_15c;
  (**(code **)(*piVar3 + 0xcc))();
  uStack_18 = 3;
  if (0xf < auStack_150[0]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_164);
  }
  uVar1 = (**(code **)(*piVar3 + 0xd0))();
  auStack_150[0] = 0xf;
  uStack_154 = 0;
  local_164 = local_164 & 0xffffff00;
  uStack_18 = 6;
  FUN_009f4bc0(auStack_dc,&local_164,uVar1);
  uStack_18 = 8;
  if (0xf < auStack_150[0]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_164);
  }
  auStack_150[0] = 0xf;
  uStack_154 = 0;
  local_164 = local_164 & 0xffffff00;
  psVar4 = (short *)(**(code **)(*piVar3 + 0xf4))(&stack0xfffffe94);
  sStack_98 = *psVar4 + -10;
  uStack_96 = 2000;
  FUN_00409350(&DAT_00ded94d,0);
  uStack_a8 = 0;
  uStack_2b = 1;
  (**(code **)(iStack_e0 + 0x54))(auStack_fc);
  uVar1 = FUN_009f6090(auStack_150);
  uStack_20 = 9;
  FUN_00408ed0(uVar1,0,0xffffffff);
  uStack_20 = 8;
  if (0xf < auStack_150[5]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_150[0]);
  }
  FUN_00989510(auStack_12c,10);
  uStack_20 = 10;
  (*(code *)*_DAT_00000000)(1);
  uStack_138 = uStack_130;
  do {
    while( true ) {
      if ((uStack_138 < uStack_130) || (auStack_12c[0] <= uStack_138)) {
        if (uStack_130 != 0) {
          FUN_00413860();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_130);
        }
        uStack_130 = 0;
        auStack_12c[0] = 0;
        auStack_12c[1] = 0;
        uStack_24 = CONCAT31(uStack_24._1_3_,3);
        FUN_009f4d20();
        if (uStack_d8 < 0x10) {
          ExceptionList = local_14;
          return;
        }
        puStack_174 = (uint *)auStack_ec[0];
                    /* WARNING: Subroutine does not return */
        puStack_178 = (uint *)&UNK_0064d58e;
        FUN_00aae91b();
      }
      uVar5 = (**(code **)(*param_2 + 4))();
      puVar2 = (uint *)FUN_00aae9af(0x2c);
      uStack_24 = CONCAT31(uStack_24._1_3_,0xb);
      puStack_174 = puVar2;
      if (puVar2 == (uint *)0x0) {
        puVar2 = (uint *)0x0;
      }
      else {
        auStack_150[4] = 0xf;
        auStack_150[3] = 0;
        uStack_154 = uStack_154 & 0xffffff00;
        FUN_00409350("logtext",7);
        puStack_17c = (uint *)((uint)puStack_17c | 2);
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *(undefined1 *)(puVar2 + 4) = 0;
        DAT_013f08e0 = DAT_013f08e0 + 1;
        *(undefined1 *)(puVar2 + 5) = 0;
        *(undefined1 *)(puVar2 + 6) = 0;
        puVar2[7] = (uint)&PTR_FUN_00e39158;
        uStack_24 = 0x10;
        *puVar2 = (uint)&PTR_FUN_00e392f0;
        puVar2[7] = (uint)&PTR_FUN_00e39320;
        *(undefined1 *)(puVar2 + 9) = 0;
        uVar6 = (**(code **)(*param_3 + 0x2c))(&uStack_154,param_4);
        puVar2[8] = uVar6;
        *puVar2 = (uint)CMessageListboxItem::vftable;
        puVar2[7] = (uint)CMessageListboxItem::vftable;
        puVar2[10] = uVar5;
      }
      uStack_24 = 10;
      if (((uint)puStack_17c & 2) != 0) {
        puStack_17c = (uint *)((uint)puStack_17c & 0xfffffffd);
        if (0xf < auStack_150[4]) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_154);
        }
        auStack_150[4] = 0xf;
        auStack_150[3] = 0;
        uStack_154 = uStack_154 & 0xffffff00;
      }
      auStack_15c[0] = 0xf;
      puStack_160 = (uint *)0x0;
      FUN_00409350("messagelogbutton",0x10);
      uStack_24 = CONCAT31(uStack_24._1_3_,0x12);
      piVar3 = (int *)(**(code **)(*(int *)puVar2[8] + 0x34))(&stack0xfffffe90);
      (**(code **)(*piVar3 + 0xcc))(auStack_150[5],0);
      uStack_30 = 10;
      if (0xf < unaff_EBX) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puStack_17c);
      }
      unaff_EBX = 0xf;
      puStack_17c = (uint *)((uint)puStack_17c & 0xffffff00);
      FUN_00409350("messagelogbutton",0x10);
      uStack_30 = 0x13;
      iVar7 = (**(code **)(*(int *)puVar2[8] + 0x34))(&puStack_17c);
      (**(code **)(*(int *)(iVar7 + 0x54) + 4))(param_5);
      uStack_38 = 10;
      if (param_1[0x41] != 0) {
        (**(code **)(*(int *)(param_1[0x41] + 0x54) + 0x10))();
      }
      (**(code **)(*param_1 + 0x10))(puVar2,0);
      *param_6 = 1;
      iVar8 = (**(code **)(*param_1 + 0x2c))();
      iVar7 = param_1[0x54];
      if (iVar7 < *(int *)(iVar8 + 8)) break;
LAB_0064d526:
      (**(code **)(*param_1 + 0x78))();
LAB_0064d52f:
      uStack_138 = uStack_138 + 0x1c;
    }
    iVar8 = (**(code **)(*param_1 + 0x2c))();
    iVar7 = (int)(float)puStack_178 + iVar7;
    if (*(int *)(iVar8 + 8) + -1 <= iVar7) goto LAB_0064d526;
    iVar8 = param_1[0x41];
    if ((iVar8 == 0) || ((float)puStack_178 <= DAT_00f092dc)) goto LAB_0064d52f;
    FUN_00401000(((float)puStack_178 + 0.0005) * 1000.0,iVar7,1,1);
    uVar1 = FUN_00b31c00();
    (**(code **)(*(int *)(iVar8 + 0x54) + 0x1c))(uVar1);
    uStack_138 = uStack_138 + 0x1c;
  } while( true );
}

