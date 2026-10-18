// FUN_009cceb0 @ 009cceb0 body=[[009cceb0, 009ccf33]]


void FUN_009cceb0(void)

{
  int in_EAX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(short *)(in_EAX + 0x244) == 0) {
    iVar1 = FUN_009caed0(&local_10,*(undefined4 *)(in_EAX + 0x228));
    local_c = *(undefined4 *)(iVar1 + 4);
    local_10 = *(undefined4 *)(in_EAX + 0xa4);
  }
  else {
    puVar2 = (undefined4 *)FUN_009caed0(&local_10,*(undefined4 *)(in_EAX + 0x228));
    local_10 = *puVar2;
    local_c = *(undefined4 *)(in_EAX + 0x84);
  }
  *(undefined4 *)(in_EAX + 0xa8) = local_c;
  *(undefined4 *)(in_EAX + 0xa4) = local_10;
  FUN_009ccd10(local_10,local_c);
  return;
}

