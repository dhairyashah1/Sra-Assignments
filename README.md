# Sra-Assignments
Solutions to problem statements provided by SRA, VJTI
  * [1. Data-Relay](https://github.com/dhairyashah1/Sra-Assignments)

# DATA-RELAY 
Implementing MQTT communication protocol aided by data compression and json manipulation using mosquitto library in C.


# Problem Statement
Consider you have deployed various sensors in your office like temperature, pressure, gas, smoke, motion, proximity, etc. These sensors are present on different floors and rooms with 50 edge boards. You need to get the sensor readings to a single device like your mobile phone. Also, since sensors will be working the whole day, the size of data will increase tremendously. Considering that you need at least one week's data to provide the user with some statistics, you will have to compress and store the data on the user's device.


<!-- TABLE OF CONTENTS -->
## Table of Contents

* [About the Project](#about-the-project)
  * [Tech Stack](#tech-stack)
  * [File Structure](#file-structure)
* [Getting Started](#getting-started)
  * [Prerequisites](#prerequisites)
  * [Installation](#installation)
* [Usage](#usage)
* [Results and Demo](#results-and-demo)
* [Future Work](#future-work)
* [Troubleshooting](#troubleshooting)
* [Contributors](#contributors)
* [Acknowledgements and Resources](#acknowledgements-and-resources)
* [License](#license)


<!-- ABOUT THE PROJECT -->
## About The Project
The basic idea of this project is to understand MQTT protocol and this functioning and manipulating large data with minimal space and efficent storage. The project is done using mosquitto library in C. It can also be achieved using the Paho library in C++.

### Tech Stack
* [MQTT](https://mqtt.org/)
* [C](#)
* [Multithreading](https://www.youtube.com/watch?v=QbFM0YroaF0)  
* [JSON](https://linuxprograms.wordpress.com/2010/05/20/json-c-libjson-tutorial/)

### File Structure
    .
    ├── publisher.c                  # Publishes the data i.e in our case various SENSORS
    ├── subscriber.c                 # subscribes to the data using MQTT service
    ├── data    
    │   ├── device1  
    |       ├── temperature.txt      # -40 to 110 degree Celcius (upto 2 decimal places)
    |       ├── humidity.txt         # 0% to 100% (upto 3 decimal places)
    |       ├── air_pressure.txt     # 3 to 300 psi (integer)
    |       └──  ph.txt              # 0 to 14 (upto 1 decimal place)
    |    └── device2
    |       ├── distance.txt         # 0 to 100m (upto 2 decimal places) 
    |       └── switch_state.txt     # “ON” or “OFF”
    │        
    ├── src                     # Source files (alternatively `lib` or `app`)
    ├── ...
    ├── test                    # Test files (alternatively `spec` or `tests`)
    ├── ...
    ├── LICENSE
    ├── README.md 
    ├── Setup.md                # If Installation instructions are lengthy
    └── todo.md                 # If Future developments and current status gets lengthy
    

<!-- GETTING STARTED 
## Getting Started

### Prerequisites

* See [SETUP.md](https://link/to/setup.md) if there are plenty of instructions
* List of softwares with version tested on 
```sh
How to install them
```

* **ESP-IDF v4.0 and above**

  You can visit the [ESP-IDF Programmming Guide](https://docs.espressif.com/projects/esp-idf/en/latest/get-started/index.html#installation-step-by-step) for the installation steps.
  
* See if you can make requirements.txt  
```sh
pip install -r "requirements.txt" -->
```

### Installation
1. Clone the repo
```sh
git clone https://github.com/dhairyashah1/Sra-Assignments.git
```


<!-- USAGE EXAMPLES -->
## Usage
```
How to run the driver code
```


<!-- RESULTS AND DEMO
## Results and Demo
Use this space to show useful examples of how a project can be used. Additional screenshots, code examples and demos work well in this space.  
[**result screenshots**](https://result.png)  
![**result gif or video**](https://result.gif)  

| Use  |  Table  |
|:----:|:-------:| 
| For  | Comparison| -->


<!-- FUTURE WORK -->
## Future Work
* See [todo.md](https://todo.md) for seeing developments of this project
- [x] Using multithreading to create various bots
- [x] Generating Random JSON
- [ ] Implementing Compression Algorithm
- [ ] Compiling all code

<!-- TROUBLESHOOTING -->
## Troubleshooting
* Common errors while configuring the project
> Errors tend to occur while library installation. Kindly download as per your system configurations.

<!-- CONTRIBUTORS -->
## Contributors
* [Dhairya Shah](https://github.com/dhairyashah1)


<!-- ACKNOWLEDGEMENTS AND REFERENCES -->
## Acknowledgements and Resources
* [SRA VJTI](http://sra.vjti.info/) Eklavya 2020  
* [Vedant Paranjape](https://github.com/VedantParanjape)
* MQTT using mosquitto
  * [1. Basics: Publisher- Subscriber](https://www.youtube.com/watch?v=ERPhUsmbhMo&t=101s)
  <!--* [2. ]()-->
* [Multithreading using C](https://www.youtube.com/watch?v=QbFM0YroaF0)
* [JSON](https://linuxprograms.wordpress.com/2010/05/20/json-c-libjson-tutorial/) for learning c-json

...


<!-- LICENSE -->
## License
[MIT License](LICENSE) 
