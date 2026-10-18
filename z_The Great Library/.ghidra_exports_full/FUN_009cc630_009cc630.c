// FUN_009cc630 @ 009cc630 body=[[009cc630, 009cc678]]


void FUN_009cc630(void)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined1 local_10 [12];
  
  if (*(int **)(in_ECX + 0x21c) != (int *)0x0) {
    if (*(char *)(in_ECX + 0x74) == '\0') {
      puVar1 = (undefined4 *)(**(code **)(**(int **)(in_ECX + 0x21c) + 0x4c))(local_10);
      *(undefined4 *)(in_ECX + 0x214) = *puVar1;
      *(undefined4 *)(in_ECX + 0x218) = puVar1[1];
      *(undefined1 *)(in_ECX + 0x74) = 1;
    }
    FUN_009cc340();
  }
  return;
}

