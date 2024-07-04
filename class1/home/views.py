from django.shortcuts import render, HttpResponse

# Create your views here.
def home(request):
    return HttpResponse("Ths is the data")