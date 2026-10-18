// FUN_007b9140 @ 007b9140 body=[[007b9140, 007b91eb]]


void FUN_007b9140(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 local_408 [1024];
  int local_8;
  
  iVar2 = local_8;
  iVar1 = *(int *)(in_ECX + 0x104);
  while ((iVar1 == 0 && (*(char *)(in_ECX + 0x108) == '\0'))) {
    local_8 = 0;
    uVar3 = (**(code **)(in_ECX + 0xf0))(*(undefined4 *)(in_ECX + 0xfc),local_408,0x400,&local_8);
    *(undefined4 *)(in_ECX + 0x104) = uVar3;
    if (0 < local_8) {
      FUN_009d7490(*(undefined4 *)(in_ECX + 0x110),local_408,local_408 + local_8,iVar2);
      *(int *)(in_ECX + 0x148) = *(int *)(in_ECX + 0x148) + local_8;
    }
    if (local_8 < 0x400) {
      *(undefined1 *)(in_ECX + 0x108) = 1;
    }
    iVar1 = *(int *)(in_ECX + 0x104);
  }
  return;
}

