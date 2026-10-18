// FUN_009e5410 @ 009e5410 body=[[009e5410, 009e5443]]


void FUN_009e5410(void)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined1 local_c [8];
  
  if (*(int **)(in_ECX + 0x260) != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(**(int **)(in_ECX + 0x260) + 0x4c))(local_c);
    *(undefined4 *)(in_ECX + 600) = *puVar1;
    *(undefined4 *)(in_ECX + 0x25c) = puVar1[1];
  }
  return;
}

