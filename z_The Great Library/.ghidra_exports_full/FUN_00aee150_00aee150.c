// FUN_00aee150 @ 00aee150 body=[[00aee150, 00aee293]]


undefined4 FUN_00aee150(int *param_1,int param_2)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  int in_ECX;
  uint unaff_EBX;
  int unaff_EBP;
  bool bVar4;
  int unaff_retaddr;
  undefined1 local_8 [8];
  
  iVar1 = *(int *)(param_2 + 0x1c);
  (**(code **)(*param_1 + 8))(local_8,8);
  if (iVar1 == 1) {
    unaff_EBP = CONCAT13((char)unaff_EBP,
                         CONCAT12((char)((uint)unaff_EBP >> 8),
                                  CONCAT11((char)((uint)unaff_EBP >> 0x10),
                                           (char)((uint)unaff_EBP >> 0x18))));
  }
  if (*(char *)(in_ECX + 0xc) != '\0') {
    FUN_00b15e80("- File Information");
  }
  uVar3 = FUN_00aee020(param_1,*(undefined4 *)(param_2 + 0x18),iVar1);
  if (*(char *)(in_ECX + 0xc) != '\0') {
    FUN_00b15e80("   + Source application = \'%s\'",uVar3);
  }
  uVar3 = FUN_00aee020(param_1,*(undefined4 *)(param_2 + 0x18),iVar1);
  if (*(char *)(in_ECX + 0xc) != '\0') {
    FUN_00b15e80("   + Original filename  = \'%s\'",uVar3);
  }
  uVar3 = FUN_00aee020(param_1,*(undefined4 *)(param_2 + 0x18),iVar1);
  if (*(char *)(in_ECX + 0xc) != '\0') {
    FUN_00b15e80("   + Exporter comp date = \'%s\'",uVar3);
  }
  uVar3 = FUN_00aee020(param_1,*(undefined4 *)(param_2 + 0x18),iVar1);
  bVar4 = *(char *)(in_ECX + 0xc) == '\0';
  if (!bVar4) {
    FUN_00b15e80("   + Motion name        = \'%s\'",uVar3);
    bVar4 = *(char *)(in_ECX + 0xc) == '\0';
    if (!bVar4) {
      FUN_00b15e80("   + Exporter version   = v%d.%d",unaff_EBX & 0xff,unaff_EBX >> 8 & 0xff);
      bVar4 = *(char *)(in_ECX + 0xc) == '\0';
    }
  }
  if (!bVar4) {
    FUN_00b15e80("   + Motion FPS         = %d",unaff_EBP);
  }
  fVar2 = (float)unaff_EBP;
  if (unaff_EBP < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  *(float *)(unaff_retaddr + 0x2c) = fVar2;
  return 1;
}

