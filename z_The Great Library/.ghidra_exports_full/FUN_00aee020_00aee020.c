// FUN_00aee020 @ 00aee020 body=[[00aee020, 00aee0bd]]


undefined4 FUN_00aee020(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int unaff_EDI;
  undefined1 *puVar4;
  undefined1 local_4 [4];
  
  iVar1 = FUN_00ad9bf0(param_2,1);
  puVar4 = local_4;
  (**(code **)(*param_1 + 8))(puVar4,4);
  if (param_1 == (int *)0x1) {
    unaff_EDI = CONCAT13((char)unaff_EDI,
                         CONCAT12((char)((uint)unaff_EDI >> 8),
                                  CONCAT11((char)((uint)unaff_EDI >> 0x10),
                                           (char)((uint)unaff_EDI >> 0x18))));
  }
  uVar2 = unaff_EDI + 1;
  if (*(uint *)(iVar1 + 0xc) < uVar2) {
    *(uint *)(iVar1 + 0xc) = uVar2;
    uVar3 = (*(code *)PTR_FUN_00f01b0c)(*(undefined4 *)(iVar1 + 0x10),uVar2,600,4,0,0,0);
    *(undefined4 *)(iVar1 + 0x10) = uVar3;
  }
  (**(code **)(*param_1 + 8))(*(undefined4 *)(iVar1 + 0x10),unaff_EDI);
  puVar4[*(int *)(iVar1 + 0x10)] = 0;
  return *(undefined4 *)(iVar1 + 0x10);
}

