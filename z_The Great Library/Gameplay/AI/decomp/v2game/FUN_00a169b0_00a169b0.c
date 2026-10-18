// FUN_00a169b0 @ 00a169b0 body=[[00a169b0, 00a16a11]]


void FUN_00a169b0(void)

{
  char cVar1;
  int in_EAX;
  uint uVar2;
  uint *puVar3;
  undefined4 local_10;
  uint *local_c;
  
  cVar1 = FUN_00416db0();
  if (cVar1 != '\0') {
    *(undefined1 *)(in_EAX + 100) = 1;
  }
  puVar3 = (uint *)(in_EAX + 8);
  uVar2 = FUN_0045c080(*(undefined4 *)(in_EAX + 0xc));
  if ((*puVar3 <= uVar2) && (uVar2 < *(uint *)(in_EAX + 0xc))) {
    local_10 = FUN_0045c080(*(uint *)(in_EAX + 0xc));
    local_c = puVar3;
    FUN_0045bdf0(puVar3,&local_10);
  }
  return;
}

