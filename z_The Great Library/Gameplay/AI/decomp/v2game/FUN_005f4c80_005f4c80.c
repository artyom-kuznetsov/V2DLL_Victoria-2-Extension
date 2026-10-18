// FUN_005f4c80 @ 005f4c80 body=[[005f4c80, 005f4d27]]


void FUN_005f4c80(char param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_20 [4];
  undefined1 *local_1c;
  undefined4 local_14;
  
  if (param_1 == '\0') {
    uVar3 = 0;
    FUN_00414cc0(in_ECX + 0x10);
    FUN_004b6120(in_ECX,uVar3);
  }
  else {
    local_14 = *(undefined4 *)(in_ECX + 0xc);
    FUN_004b6180();
    puVar1 = (undefined4 *)FUN_004a8200();
    local_1c = local_20;
    *(undefined4 *)(in_ECX + 0x10) = *puVar1;
    uVar3 = 0;
    iVar2 = in_ECX + 0x14;
    FUN_00414cc0(iVar2);
    FUN_004b6120(iVar2,uVar3);
  }
  return;
}

