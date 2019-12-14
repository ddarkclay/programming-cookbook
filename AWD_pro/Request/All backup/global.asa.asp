<%@ Language=VBScript %>
sub Application_OnStart
Application("Hit")=0
End sub

sub Session_OnStart
Application("Hit")=Application("Hit")+1
End sub

sub Session_OnEnd
Application("Hit")=Application("Hit")-1
End sub
