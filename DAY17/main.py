from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
import time
import pyttsx3

engine = pyttsx3.init()
text = 'Hello Deepak. I will attend your online classes. Have a nice day'
engine.say(text)
engine.runAndWait()


driver = webdriver.Chrome(executable_path=r"C:\Users\ratna\Desktop\Selenium\chromedriver_win32\chromedriver.exe")
driver.maximize_window() 
driver.get('https://rvrjcce.codetantra.com/login.jsp')
print(driver.title)

user_name = driver.find_element_by_name("loginId")
password = driver.find_element_by_name("password")
login = driver.find_element_by_id("loginBtn")

user_name.send_keys("manideepak650@gmail.com")
password.send_keys("1")
login.click()
print("Login Successful")

time.sleep(1)
while True:
	try:
		meetings = driver.find_element(By.XPATH,"//a[@title = 'Click here to view Meetings']")
		meetings.click()
		break
	except:
		time.sleep(2)

time.sleep(1)
while True:
	try:
		flag = 0
		classes = driver.find_elements_by_class_name("fc-time-grid-event")
		classes[0].click()
		break
		for item in classes:
			attrs = driver.execute_script('var items = {}; for (index = 0; index < arguments[0].attributes.length; ++index) { items[arguments[0].attributes[index].name] = arguments[0].attributes[index].value }; return items;', item)
			if 'background' in attrs:
				print('g')
				if attrs['background'] == 'green':
					print(item)
					flag = 1
					item.click()
					print('green')
					break
		print(len(classes))
		if flag == 1:
			break
		break
	except:
		time.sleep(2)


# classes[0].click()
while True:
	try:
		close = driver.find_element(By.XPATH, "//a[@href = '/secure/tla/m.jsp']")
		try:
			join = driver.find_element(By.XPATH, "//a[@role = 'button']")
			join.click()
			
		except:
			break
	except:
		time.sleep(2)

time.sleep(20)
	
print("Waiting for listen")

iframe = driver.find_element_by_xpath("//iframe[@id='frame']")
driver.switch_to.frame(iframe)
listen = driver.find_elements_by_tag_name("button")
for item in listen:
	attrs = driver.execute_script('var items = {}; for (index = 0; index < arguments[0].attributes.length; ++index) { items[arguments[0].attributes[index].name] = arguments[0].attributes[index].value }; return items;', item)
	if 'aria-label' in attrs:
		if attrs['aria-label'] == 'Listen only':
			item.click()
			break

time.sleep(5)


time.sleep(60)
driver.quit()
time.sleep(10)
