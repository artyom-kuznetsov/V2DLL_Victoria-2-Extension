// FUN_00658fd0 @ 00658fd0 body=[[00658fd0, 006590f7] [006590fb, 00659115] [00659119, 00659136] [0065913a, 00659169] [0065916d, 006591bc] [006591c0, 006591f6] [006591fa, 0065929b] [0065929f, 006592db] [006592df, 006592ee]]


void FUN_00658fd0(char *param_1)

{
  char cVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *in_ECX;
  char *pcVar7;
  int iVar8;
  float10 fVar9;
  uint local_94 [4];
  undefined4 local_84;
  uint local_80;
  uint local_78;
  undefined4 local_68;
  uint local_64;
  char local_5c [4];
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  double local_20;
  double local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b452b3;
  local_10 = ExceptionList;
  local_80 = 0xf;
  local_84 = 0;
  local_94[0] = local_94[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("          ",10);
  local_8 = 0;
  iVar8 = 0;
  if (0 < (int)in_ECX[1]) {
    do {
      FUN_00448aa0(local_94,0,0xffffffff);
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)in_ECX[1]);
  }
  fVar9 = (float10)FUN_009f49f0();
  local_20 = (double)fVar9;
  local_18 = 1.0;
  if ((*(int *)(param_1 + 0x4c) != 0) && (*(int *)(*(int *)(param_1 + 0x4c) + 0x10) != 0)) {
    fVar9 = (float10)FUN_009f4a90();
    local_18 = (double)fVar9;
    fVar9 = (float10)FUN_009f4a90();
    local_18 = (double)((float10)local_18 / fVar9);
  }
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350(&DAT_00df9638,2);
  local_8._0_1_ = 1;
  pcVar7 = param_1;
  if (0xf < *(uint *)(param_1 + 0x14)) {
    pcVar7 = *(char **)param_1;
  }
  local_64 = 0xf;
  local_68 = 0;
  local_78 = local_78 & 0xffffff00;
  pcVar5 = pcVar7;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar7,(int)pcVar5 - (int)(pcVar7 + 1));
  local_8._0_1_ = 2;
  uVar6 = FUN_00988f20(local_3c);
  local_8._0_1_ = 3;
  FUN_00448aa0(uVar6,0,0xffffffff);
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_58[0]);
  }
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_78);
  }
  local_8._0_1_ = 0;
  local_64 = 0xf;
  local_68 = 0;
  local_78 = local_78 & 0xffffff00;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  uVar6 = FUN_00988dc0(local_58,3);
  local_8._0_1_ = 4;
  FUN_00448aa0(uVar6,0,0xffffffff);
  local_8._0_1_ = 0;
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_58[0]);
  }
  FUN_00448740(&DAT_00dfbfa4,2);
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  local_8._0_1_ = 5;
  pcVar5 = __itoa((int)(local_18 * 100.0 + 0.5),local_5c,10);
  pcVar7 = pcVar5;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar5,(int)pcVar7 - (int)(pcVar5 + 1));
  local_8._0_1_ = 6;
  FUN_00448aa0(local_3c,0,0xffffffff);
  local_8._0_1_ = 0;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  FUN_00448740("%, tot: ",8);
  local_18 = ABS((double)*(ulonglong *)(param_1 + 0x30));
  dVar3 = (double)(longlong)local_18;
  local_18 = (double)((ulonglong)(*(uint *)(param_1 + 0x34) & 0x80000000) << 0x20);
  dVar4 = (double)(longlong)local_18;
  local_18 = ABS((double)CONCAT44(DAT_01258acc,DAT_01258ac8));
  dVar2 = (double)(longlong)local_18;
  local_18 = (double)((ulonglong)(DAT_01258acc & 0x80000000) << 0x20);
  local_20 = (-dVar4 + dVar3) / (-(double)(longlong)local_18 + dVar2);
  uVar6 = FUN_00988dc0(local_58,3);
  local_8._0_1_ = 7;
  FUN_00448aa0(uVar6,0,0xffffffff);
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_58[0]);
  }
  FUN_00448740(&DAT_00dfcd84,2);
  FUN_0067a950(&local_20,**(undefined4 **)(param_1 + 0x40),*(undefined4 **)(param_1 + 0x40),*in_ECX,
               in_ECX[1] + 1);
  if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_94[0]);
  }
  ExceptionList = local_10;
  return;
}

