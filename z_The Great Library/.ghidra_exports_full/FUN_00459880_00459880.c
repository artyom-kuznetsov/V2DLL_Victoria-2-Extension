// FUN_00459880 @ 00459880 body=[[00459880, 004598d8]]


void FUN_00459880(void)

{
  int in_EAX;
  undefined1 local_4c [8];
  undefined4 local_44;
  undefined4 local_40;
  
  if (*(int *)(in_EAX + 0x10) == 0) {
    FUN_008a8650(0);
    local_44 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
    local_40 = *(undefined4 *)(DAT_012588e8 + 0xb60);
    FUN_0045fa60(local_4c);
    return;
  }
  FUN_0045f990(in_EAX);
  return;
}

