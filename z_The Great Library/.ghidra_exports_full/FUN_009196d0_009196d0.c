// FUN_009196d0 @ 009196d0 body=[[009196d0, 009197ef] [009197f3, 00919889] [0091988d, 009198ab] [009198af, 00919919] [0091991d, 00919caa] [00919cae, 00919cf8]]


undefined1 * FUN_009196d0(undefined1 *param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint **ppuVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_ECX;
  uint **ppuStack_d4;
  uint **ppuStack_d0;
  char *local_c0 [5];
  uint local_ac [4];
  undefined4 local_9c;
  uint local_98;
  char *local_90 [5];
  undefined4 local_7c;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  char **local_5c [4];
  undefined4 local_4c;
  uint local_48;
  int local_40;
  char **local_3c [4];
  undefined4 local_2c;
  uint local_28;
  int local_20;
  undefined4 local_1c;
  int *local_18;
  char local_13;
  char local_12;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bb4b2d;
  local_10 = ExceptionList;
  local_7c = 0;
  local_20 = in_ECX[2];
  local_40 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + in_ECX[3] * 4) + 0xbe8
                                       ) + in_ECX[5] * 4) + 0x34);
  if (local_40 == 0) {
    ppuStack_d0 = (uint **)0x0;
    ExceptionList = &local_10;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    ppuStack_d4 = (uint **)&DAT_00ded94d;
    *param_1 = 0;
    FUN_00409350();
    ExceptionList = local_10;
    return param_1;
  }
  if (((*(int *)(local_40 + 0x30) - *(int *)(local_40 + 0x2c) & 0xfffffff8U) == 0) ||
     ((*(int *)(local_40 + 0x40) - *(int *)(local_40 + 0x3c) & 0xfffffff8U) == 0)) {
    ppuStack_d0 = (uint **)0x0;
    ExceptionList = &local_10;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    ppuStack_d4 = (uint **)&DAT_00ded94d;
    *param_1 = 0;
    FUN_00409350();
    ExceptionList = local_10;
    return param_1;
  }
  ppuStack_d0 = (uint **)0x919774;
  ExceptionList = &local_10;
  local_18 = in_ECX;
  local_11 = (**(code **)(*in_ECX + 0x6c))();
  if ((local_11 == '\0') && ((char)in_ECX[0xc] == '\0')) {
    ppuStack_d4 = (uint **)0xe33bd4;
  }
  else {
    ppuStack_d4 = (uint **)0xe33bc4;
  }
  local_98 = 0xf;
  local_9c = 0;
  local_ac[0] = local_ac[0] & 0xffffff00;
  ppuVar3 = ppuStack_d4;
  do {
    cVar1 = *(char *)ppuVar3;
    ppuVar3 = (uint **)((int)ppuVar3 + 1);
  } while (cVar1 != '\0');
  ppuStack_d0 = (uint **)((int)ppuVar3 - (int)((int)ppuStack_d4 + 1));
  FUN_00409350();
  ppuStack_d0 = (uint **)local_ac;
  ppuStack_d4 = (uint **)local_c0;
  local_8 = 1;
  FUN_009a8ee0();
  local_8._0_1_ = 3;
  if (0xf < local_98) {
    ppuStack_d0 = (uint **)local_ac[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_d4 = (uint **)&UNK_009197f0;
    FUN_00aae91b();
  }
  ppuStack_d0 = (uint **)0x7;
  ppuStack_d4 = (uint **)0xdf27b4;
  local_98 = 0xf;
  local_9c = 0;
  local_ac[0] = local_ac[0] & 0xffffff00;
  local_64 = 0xf;
  local_68 = 0;
  local_78[0] = local_78[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 4;
  local_20 = in_ECX[2];
  ppuStack_d0 = (uint **)0x919843;
  ppuStack_d0 = (uint **)FUN_004f97a0();
  ppuStack_d4 = (uint **)local_90;
  local_8._0_1_ = 5;
  ppuStack_d0 = (uint **)FUN_009a8ee0();
  local_8._0_1_ = 6;
  ppuStack_d4 = (uint **)0x919867;
  FUN_009a9a90();
  ppuStack_d0 = (uint **)local_90;
  local_8._0_1_ = 5;
  ppuStack_d4 = (uint **)0x919877;
  FUN_009a9740();
  if (0xf < local_28) {
    ppuStack_d0 = (uint **)local_3c[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_d4 = (uint **)&UNK_0091988a;
    FUN_00aae91b();
  }
  local_8._0_1_ = 3;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = (char **)((uint)local_3c[0] & 0xffffff00);
  if (0xf < local_64) {
    ppuStack_d0 = (uint **)local_78[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_d4 = (uint **)&UNK_009198ac;
    FUN_00aae91b();
  }
  ppuStack_d0 = (uint **)0x9198b4;
  iVar4 = FUN_00475500();
  ppuStack_d4 = (uint **)*(undefined8 *)(iVar4 + 0x74);
  ppuStack_d0 = (uint **)((ulonglong)*(undefined8 *)(iVar4 + 0x74) >> 0x20);
  FUN_009a9880((int)*(undefined8 *)(iVar4 + 0x6c),
               (int)((ulonglong)*(undefined8 *)(iVar4 + 0x6c) >> 0x20));
  ppuStack_d0 = (uint **)0x1;
  ppuStack_d4 = (uint **)&DAT_00dee2cc;
  local_8._0_1_ = 7;
  FUN_00448740();
  ppuStack_d0 = (uint **)local_3c;
  ppuStack_d4 = (uint **)0x9198f8;
  uVar5 = FUN_00929480();
  ppuStack_d4 = (uint **)0xffffffff;
  local_8._0_1_ = 8;
  FUN_00448aa0(uVar5,0);
  local_8._0_1_ = 7;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 7;
  if (0xf < local_28) {
    ppuStack_d4 = (uint **)local_3c[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar4 = *(int *)(*(int *)(local_40 + 0x2c) + 4);
  local_13 = '\0';
  local_12 = '\0';
  if ((iVar4 == in_ECX[5]) || (*(int *)(*(int *)(local_40 + 0x3c) + 4) == in_ECX[5])) {
    local_13 = '\x01';
  }
  local_20 = in_ECX[2];
  if ((iVar4 == in_ECX[3]) || (*(int *)(*(int *)(local_40 + 0x3c) + 4) == in_ECX[3])) {
    local_12 = '\x01';
  }
  if (local_11 == '\0') {
    ppuStack_d4 = (uint **)0x1;
    FUN_00448740(&DAT_00defdf4);
    if (local_13 == '\0') {
      ppuStack_d4 = (uint **)0x9199fe;
      FUN_009885d0();
      ppuStack_d4 = (uint **)local_3c;
      local_8._0_1_ = 0xc;
      local_1c = FUN_009a8ee0(local_90);
      local_8._0_1_ = 0xd;
      ppuStack_d4 = (uint **)0x919a1e;
      iVar4 = FUN_00475500();
      ppuStack_d4 = (uint **)((ulonglong)*(undefined8 *)(iVar4 + 0x74) >> 0x20);
      uVar5 = FUN_009a9880((int)*(undefined8 *)(iVar4 + 0x6c),
                           (int)((ulonglong)*(undefined8 *)(iVar4 + 0x6c) >> 0x20),
                           (int)*(undefined8 *)(iVar4 + 0x74));
      ppuStack_d4 = (uint **)0xffffffff;
      local_8._0_1_ = 0xe;
      FUN_00448aa0(uVar5,0);
      ppuStack_d4 = (uint **)0x919a58;
      FUN_00408ad0();
      local_8._0_1_ = 0xc;
    }
    else {
      ppuStack_d4 = (uint **)0x919995;
      FUN_009885d0();
      local_8._0_1_ = 9;
      ppuStack_d4 = (uint **)local_3c;
      local_1c = FUN_009a8ee0(local_90);
      local_8._0_1_ = 10;
      ppuStack_d4 = (uint **)0x9199b4;
      iVar4 = FUN_00475500();
      ppuStack_d4 = (uint **)((ulonglong)*(undefined8 *)(iVar4 + 0x74) >> 0x20);
      uVar5 = FUN_009a9880((int)*(undefined8 *)(iVar4 + 0x6c),
                           (int)((ulonglong)*(undefined8 *)(iVar4 + 0x6c) >> 0x20),
                           (int)*(undefined8 *)(iVar4 + 0x74));
      ppuStack_d4 = (uint **)0xffffffff;
      local_8._0_1_ = 0xb;
      FUN_00448aa0(uVar5,0);
      ppuStack_d4 = (uint **)0x9199ee;
      FUN_00408ad0();
      local_8._0_1_ = 9;
    }
    ppuStack_d4 = (uint **)local_90;
    FUN_009a9740();
    local_8._0_1_ = 7;
    ppuStack_d4 = (uint **)0x919a74;
    FUN_00408ad0();
    if (local_12 == '\0') {
      ppuStack_d4 = (uint **)0x919b0f;
      FUN_009885d0();
      ppuStack_d4 = (uint **)local_3c;
      local_8._0_1_ = 0x12;
      local_18 = (int *)FUN_009a8ee0(local_90);
      local_8._0_1_ = 0x13;
      ppuStack_d4 = (uint **)0x919b2f;
      iVar4 = FUN_00475500();
      ppuStack_d4 = (uint **)((ulonglong)*(undefined8 *)(iVar4 + 0x74) >> 0x20);
      uVar5 = FUN_009a9880((int)*(undefined8 *)(iVar4 + 0x6c),
                           (int)((ulonglong)*(undefined8 *)(iVar4 + 0x6c) >> 0x20),
                           (int)*(undefined8 *)(iVar4 + 0x74));
      ppuStack_d4 = (uint **)0xffffffff;
      local_8._0_1_ = 0x14;
      FUN_00448aa0(uVar5,0);
      ppuStack_d4 = (uint **)0x919b69;
      FUN_00408ad0();
      ppuStack_d4 = (uint **)local_90;
      local_8._0_1_ = 0x12;
      FUN_009a9740();
      local_8._0_1_ = 7;
      ppuStack_d4 = (uint **)0x919b85;
      FUN_00408ad0();
    }
    else {
      ppuStack_d4 = (uint **)0x919a8a;
      FUN_009885d0();
      local_8._0_1_ = 0xf;
      ppuStack_d4 = (uint **)local_3c;
      FUN_009a8ee0(local_90);
      local_8._0_1_ = 0x10;
      ppuStack_d4 = (uint **)0x919aa8;
      iVar4 = FUN_00475500();
      ppuStack_d4 = (uint **)((ulonglong)*(undefined8 *)(iVar4 + 0x74) >> 0x20);
      uVar5 = FUN_009a9880((int)*(undefined8 *)(iVar4 + 0x6c),
                           (int)((ulonglong)*(undefined8 *)(iVar4 + 0x6c) >> 0x20),
                           (int)*(undefined8 *)(iVar4 + 0x74));
      ppuStack_d4 = (uint **)0xffffffff;
      local_8._0_1_ = 0x11;
      FUN_00448aa0(uVar5,0);
      ppuStack_d4 = (uint **)0x919ae1;
      FUN_00408ad0();
      ppuStack_d4 = (uint **)local_90;
      local_8._0_1_ = 0xf;
      FUN_009a9740();
      local_8._0_1_ = 7;
      ppuStack_d4 = (uint **)0x919afd;
      FUN_00408ad0();
      in_ECX = local_18;
    }
    ppuStack_d4 = (uint **)0x2;
    FUN_00448740(&DAT_00dfcd84);
    uVar2 = (undefined1)local_8;
  }
  local_8._0_1_ = uVar2;
  ppuStack_d4 = (uint **)0x0;
  iVar4 = FUN_00936fc0(local_40,in_ECX + 2,in_ECX + 4);
  local_11 = *(char *)((int)in_ECX + 0x31);
  if (iVar4 < 0x32) {
LAB_00919bc6:
    if (local_11 == '\0') goto LAB_00919c68;
  }
  else {
    ppuStack_d4 = (uint **)in_ECX[5];
    iVar4 = FUN_0090e830(in_ECX,in_ECX[4]);
    if (iVar4 != 100) goto LAB_00919bc6;
  }
  ppuStack_d4 = *(uint ***)(*(int *)(DAT_012586dc + 0x30) + 0x448);
  local_18 = (int *)&ppuStack_d4;
  ppuVar3 = (uint **)FUN_00988970(local_ac);
  local_8._0_1_ = 0x15;
  ppuStack_d4 = *(uint ***)(*(int *)(DAT_012586dc + 0x30) + 0x444);
  local_18 = (int *)&ppuStack_d4;
  uVar5 = FUN_00988970(local_78);
  local_8._0_1_ = 0x16;
  ppuStack_d4 = ppuVar3;
  uVar5 = FUN_0043ec10(local_3c,&DAT_00e33c20,uVar5,&DAT_00e33c1c);
  ppuStack_d4 = (uint **)0xffffffff;
  local_8._0_1_ = 0x17;
  FUN_00448aa0(uVar5,0);
  ppuStack_d4 = (uint **)0x919c51;
  FUN_00408ad0();
  ppuStack_d4 = (uint **)0x919c59;
  FUN_00408ad0();
  local_8._0_1_ = 7;
  ppuStack_d4 = (uint **)0x919c68;
  FUN_00408ad0();
LAB_00919c68:
  ppuStack_d4 = (uint **)0x1;
  FUN_00448740(&DAT_00dee2cc);
  ppuStack_d4 = (uint **)0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00408ed0(local_5c,0);
  local_7c = 1;
  if (local_48 < 0x10) {
    ppuStack_d4 = (uint **)local_c0;
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = (char **)((uint)local_5c[0] & 0xffffff00);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_009a9740();
    ExceptionList = local_10;
    return param_1;
  }
  ppuStack_d4 = (uint **)local_5c[0];
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

