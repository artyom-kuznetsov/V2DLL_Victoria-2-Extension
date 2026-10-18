// thunk_FUN_00647ff0 @ 005fb4c0 body=[[005fb4c0, 005fb4c4]]


void thunk_FUN_00647ff0(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x50);
  if (*(char *)(iVar1 + 200) != '\0') {
    (**(code **)(**(int **)(iVar1 + 0x58) + 0x38))();
  }
  *(undefined1 *)(iVar1 + 200) = 0;
  (**(code **)(**(int **)(in_ECX + 0x50) + 0x30))();
  for (piVar2 = *(int **)(in_ECX + 0x60); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
  }
  return;
}

