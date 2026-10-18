// FUN_005697e0 @ 005697e0 body=[[005697e0, 005698a8]]


void FUN_005697e0(uint param_1,int param_2,char param_3,char param_4)

{
  undefined4 uVar1;
  int iVar2;
  int in_EAX;
  undefined4 uVar3;
  CSharedFile *this;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x2e4);
  if (((param_2 != *(int *)(*(int *)(in_EAX + 0x2b8) + iVar4 * 4)) &&
      (*(char *)(DAT_012588e8 + 0xd1c) != '\0')) && (param_4 == '\0')) {
    uVar1 = *(undefined4 *)(DAT_012588e8 + 0xcf4);
    uVar3 = FUN_00469980(param_1,*(int *)(in_EAX + 0x2d8) + 0x1c);
    FUN_00457b00(uVar1,uVar3);
  }
  *(int *)(*(int *)(in_EAX + 0x2b8) + iVar4 * 4) = param_2;
  if (param_3 != '\0') {
    this = (CSharedFile *)FUN_00aae9af(0x1c);
    if (this == (CSharedFile *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = CSharedFile::CSharedFile(this,*(uint *)(in_EAX + 0x2d8),param_1);
    }
    FUN_005e9880(param_2);
    iVar2 = *(int *)(in_EAX + 0x2d8);
    *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
    (**(code **)(*(int *)(iVar2 + 0x9b4) + 0x18))(iVar4);
  }
  return;
}

