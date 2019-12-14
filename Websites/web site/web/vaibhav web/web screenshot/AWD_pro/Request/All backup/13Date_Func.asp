<%@ Language=VBScript %>
<HTML>
<HEAD>
<META NAME="GENERATOR" Content="Microsoft Visual Studio 6.0">
</HEAD>
<BODY>
<%
dim str
dt=now
Response.Write(Dateadd("m",1,dt)&"<br>") ' d-day yyyy-year
Response.Write(DateDiff("d",now,#11/23/2010#)&"<br>")
Response.Write(DatePart("m",now)&"<br>")
Response.Write(date)
Response.Write(MonthName(1)&"<br>")
Response.Write(Day(#12/31/2010#)&"<br>")
Response.Write(WeekDay(now)&"<br>") 'starting wth sunday -1
Response.Write("Hour"& Hour(now)&"<br>")
Response.Write("Using Left" &Minute(now)&"<br>")
Response.Write("Using Second" & Second(now)&"<br>")
%>
<P>&nbsp;</P>

</BODY>
</HTML>
